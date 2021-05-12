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


class Pair{
public:
    int height;
    int diameter;
};

//O(N) approach : instead of calling height function separately, calcluae height using the same recursion func 
Pair fastDiameter(node *root){
    Pair p;

    if(root==NULL){
        p.diameter=p.height=0;
        return p;
    }


    Pair left = fastDiameter(root->left);
    Pair right = fastDiameter(root->right);

    p.height = max(left.height,right.height)+1;
    p.diameter = max(left.height+right.height,max(left.diameter,right.diameter));

    return p;


}

void solve()
{
    node *root = buildTree();

    Pair p = fastDiameter(root);

    bfs(root);

    cout<<endl;
    cout<<"Height : "<<p.height<<endl;
    cout<<"diameter : "<<p.diameter;

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