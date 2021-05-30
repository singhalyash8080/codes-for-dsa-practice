#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

class node{
public:
    int val;
    node *left;
    node *right;

    node(int d){
        val = d;
        left = NULL;
        right = NULL;
    }
};

node* insertInBST(node *root, int data){

    if(root==NULL){
        return new node(data);
    }

    if(root->val > data){
        root->left = insertInBST(root->left,data);
    }
    else{
        root->right = insertInBST(root->right,data);
    }

    return root;
}

node* buildBST(){

    int temp;

    cin>>temp;

    node *root = NULL;

    while(temp!=-1){

        root = insertInBST(root,temp);
        cin>>temp;
    }

    return root;
}

bool search(node *root, int key){

    if(root==NULL){
        return 0;
    }

    if(root->val==key){
        return 1;
    }
    else if(root->val>key){
        return search(root->left,key);
    }
    else{
        return search(root->right,key);
    }
}

node* deleteInBST(node *root, int key){

    if(root==NULL){
        return NULL;
    }

    if(root->val>key){
        root->left = deleteInBST(root->left,key);
        return root;
    }
    else if(root->val == key){

        // case 1 : 0 child
        if(root->left==NULL and root->right==NULL){

            delete root;
            return NULL;
        }

        // case 2 : 1 child
        if(root->left!=NULL and root->right==NULL){
            node *temp = root->left;
            delete root;
            return temp;
        }

        if(root->left==NULL and root->right!=NULL){
            node *temp = root->right;
            delete root;
            return temp;
        }

        // case 3 : 2 child

        if(root->left!=NULL and root->right!=NULL){

            node *replace = root->right;

            while(replace->left!=NULL){
                replace = replace->left;
            }

            root->val = replace->val;

            root->right = deleteInBST(root->right,replace->val);

            return root;
        } 
    }
    else{
        root->right = deleteInBST(root->right,key);   
        return root;
    }

    return root;
}

void bfs(node *root){

    if(root==NULL){
        return;
    }

    queue <node*> q;

    q.push(root);
    q.push(NULL);


    while(!q.empty()){

        if(q.front()==NULL){
            cout<<endl;
            q.pop();

            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{

            cout<<q.front()->val<<" ";

            if(q.front()->left){
                q.push(q.front()->left);                
            }

            if(q.front()->right){
                q.push(q.front()->right);
            }

            q.pop();
        }
    }

}

void solve()
{
    node *root = buildBST();

    // cout<<search(root,12)<<endl; 

    root = deleteInBST(root,10);

    bfs(root);

}

signed main()
{
    yashio();
    int T = 1;
    //cin>>T;
    while(T--)
    {
        solve();
    }
}

void yashio()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input999.txt", "r", stdin);
    freopen("output999.txt", "w", stdout);
#endif
}