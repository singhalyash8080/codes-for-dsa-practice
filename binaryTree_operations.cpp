#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

class node{
public:
    int data;

    node *left;
    node *right;

    node(int d){
        data = d;
        left=NULL;
        right=NULL;
    }
};

node *buildTree(){

    int d;
    cin>>d;

    if(d==-1){
        return NULL;
    }

    node *root = new node(d);
    root->left = buildTree();
    root->right = buildTree();

    return root;
}

void printTreePreorder(node *root){

    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    printTreePreorder(root->left);
    printTreePreorder(root->right); 
}

void printTreeInorder(node *root){

    if(root==NULL){
        return;
    }
    printTreeInorder(root->left);
    cout<<root->data<<" ";
    printTreeInorder(root->right);
}

void printTreePostorder(node *root){

    if(root==NULL){
        return;
    }
    printTreePostorder(root->left);
    printTreePostorder(root->right);
    cout<<root->data<<" ";
}

int heightOfTree(node *root){

    if(root==NULL){
        return 0;
    }

    int h1 = heightOfTree(root->left);
    int h2 = heightOfTree(root->right);

    return (max(h1,h2)+1);
}

void printKthLevel(node *root, int k){

    if(root == NULL){
        return;
    }

    if(k==1){
        cout<<root->data<<" ";
        return;
    }

    printKthLevel(root->left,k-1);
    printKthLevel(root->right,k-1);
}

void printLevelOrder(node *root){

    if(root==NULL){
        return;
    }

    int h = heightOfTree(root);

    for (int i = 1; i <=h; ++i)
    {
        printKthLevel(root,i);
        cout<<endl;
    }
}

void bfs(node *root){

    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        node * f = q.front();

        if(f==NULL){
            cout<<endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<(f->data)<<" ";
            q.pop();

            if(f->left){
                q.push(f->left);
            }

            if(f->right){
                q.push(f->right);
            }

        }

    }

    return;
}

void solve()
{
    node *root = buildTree();

    printTreePreorder(root);
    cout<<endl;
    printTreeInorder(root);
    cout<<endl;
    printTreePostorder(root);

    cout<<endl;

    // cout<<heightOfTree(root);
    // printKthLevel(root,3);

    // printLevelOrder(root);
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