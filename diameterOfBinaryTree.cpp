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

int countNodes(node *root){

    if(root==NULL){
        return 0;
    }

    return (1+countNodes(root->left)+countNodes(root->right));
}

int heightOfTree(node *root){

    if(root==NULL){
        return 0;
    }

    int h1 = heightOfTree(root->left);
    int h2 = heightOfTree(root->right);

    return (max(h1,h2)+1);
}

//O(n^2) approach
int diameter(node *root){

    if(root==NULL){
        return 0;
    }

    int h1 = heightOfTree(root->left);
    int h2 = heightOfTree(root->right);

    int op1 = h1 + h2;
    int op2 = diameter(root->left);
    int op3 = diameter(root->right);

    return max(op1,max(op2,op3));
}

void solve()
{
    node *root = buildTree();

    cout<<diameter(root);

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