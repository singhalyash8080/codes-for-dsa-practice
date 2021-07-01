#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

class DSU{

    int *parent;
    int *rank;

public:
    DSU(int n){
        parent = new int[n];
        rank = new int[n];

        for (int i = 0; i < n; ++i)
        {
            parent[i] = -1;
            rank[i] = 1;
        }
    }

    int find(int i){

        if(parent[i]==1){
            return i;
        }

        return parent[i] = find(parent[i]);
    }

    void unite(int x, int y){

        int s1 = find(x);
        int s2 = find(y);


        if(s1!=s2){

            if(rank[s1] < rank[s2]){
                parent[s1] = s2;
                rank[s2] += rank[s1];
            }
            else{
                parent[s2] = s1;
                rank[s1] += rank[s2];
            }
        }
    }
};

void solve()
{
    
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