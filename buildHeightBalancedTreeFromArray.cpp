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

node* buildHBTreeFromArray(int *a, int s, int e){

    if(s>e){
        return NULL;
    }

    int mid = (s+e)/2;

    node *root = new node(a[mid]);

    root->left = buildHBTreeFromArray(a,s,mid-1);
    root->right = buildHBTreeFromArray(a,mid+1,e);

    return root;
}


void solve()
{
    int a[] = {1,2,3,4,5,6,7};

    int n = sizeof(a)/sizeof(int);

    node *root = buildHBTreeFromArray(a,0,n-1);

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