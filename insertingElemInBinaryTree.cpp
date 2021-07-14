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
        left = right = NULL;
    }
};

void inorder(node *root){

    if(root==NULL){
        return;
    }

    inorder(root->left);

    cout<<root->data<<" ";

    inorder(root->right);
}


void insertNode(node *&root, int d){
    queue <node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        node *f = q.front();

        if(f==NULL){
            // cout<<endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            q.pop();

            if(f->left){
                q.push(f->left);
            }
            else{
                f->left = new node(d);
                return;
            }

            if(f->right){
                q.push(f->right);
            }
            else{
                f->right = new node(d);
                return;
            }
        }
    }
}

void bfs(node *root){

    queue <node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        node *f = q.front();

        if(f==NULL){
            cout<<endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<f->data<<" ";
            q.pop();

            if(f->left){
                q.push(f->left);
            }

            if(f->right){
                q.push(f->right);
            }
        }
    }
}



void solve()
{
    node *root = new node(10);
    root->left = new node(11);
    root->left->left = new node(7);
    root->right = new node(9);
    root->right->left = new node(15);
    root->right->right = new node(8);

    // inorder(root);

    bfs(root);

    insertNode(root,12);

    cout<<endl;

    bfs(root);

    // inorder(root);
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