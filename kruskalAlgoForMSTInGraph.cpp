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

        if(parent[i]==-1){
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

class Graph{

    // to store v1-v2 and the weight of edge
    vector<vector <int>> edgelist;
    int V;

public:
    Graph(int V){
        this->V = V;
    }

    void addEdge(int x, int y, int w){

        // pushing w first so that sorting is done based on the first value
        edgelist.push_back({w,x,y});
    }

    int kruskal_mst(){

        // sorting all the edges based on the weight
        sort(edgelist.begin(),edgelist.end());

        int ans = 0;

        DSU s(V);

        for(auto edge : edgelist){

            int w = edge[0];
            int x = edge[1];
            int y = edge[2];

            // take that edge in mst(minimun spanning tree) if it doesn't form a cycle

            if(s.find(x)!=s.find(y)){
                s.unite(x,y);
                ans += w;
            }
        }

        return ans;
    }
};

void solve()
{
    Graph g(4);
    g.addEdge(0,1,1);
    g.addEdge(1,3,3);
    g.addEdge(3,2,4);
    g.addEdge(2,0,2);
    g.addEdge(0,3,2);
    g.addEdge(1,2,2);

    cout<<g.kruskal_mst();

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