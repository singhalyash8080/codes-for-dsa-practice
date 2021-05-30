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


class HBPair{
public:
    int height;
    bool balance;
};

HBPair isHeightBalanced(node *root){

    HBPair p;

    if(root==NULL){

        p.height=0;
        p.balance=true;

        return p;
    }

    HBPair left = isHeightBalanced(root->left);
    HBPair right = isHeightBalanced(root->right);

    p.height = max(left.height,right.height)+1;

    if(abs(left.height-right.height)<=1 and left.balance and right.balance){

        p.balance = true;
    }
    else{

        p.balance = false;
    }

    return p;
}

void solve()
{
    node *root = buildTree();

    HBPair p = isHeightBalanced(root);

    bfs(root);

    cout<<endl;
    if(p.balance){
        cout<<"Binary tree is height balanced";
    }
    else{
        cout<<"Binary tree is not height balanced";
    }


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