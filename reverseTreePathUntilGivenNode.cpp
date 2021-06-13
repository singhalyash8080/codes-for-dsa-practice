#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

class Node {
public:
    int data;
    Node *left, *right;
    Node(int d){
        data = d;
        left = right = NULL;
    }
};

void reverseTreePath(Node *root, int d, vector <Node*> v1, vector <int> v2){

    if(root==NULL){
        return;
    }

    v1.push_back(root);
    v2.push_back(root->data);

    if(root->data == d){

        reverse(v2.begin(),v2.end());

        for (int i = 0; i < v1.size(); ++i)
        {
            v1[i]->data = v2[i];

            // cout<<v2[i]<<" ";
        }

        return;
    }

    reverseTreePath(root->left,d,v1,v2);
    reverseTreePath(root->right,d,v1,v2);

}

void inorder(Node *root){

    if(root==NULL){
        return;
    }

    inorder(root->left);

    cout<<root->data<<" ";

    inorder(root->right);

}

void solve()
{
    Node* root = new Node(7);
    root->left = new Node(6);
    root->right = new Node(5);
    root->left->left = new Node(4);
    root->left->right = new Node(3);
    root->right->left = new Node(2);
    root->right->right = new Node(1);

    int data = 4;

    vector <Node*> v1;

    vector <int> v2;

    reverseTreePath(root, data,v1,v2);

    inorder(root);
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