#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

class Graph{

    int V;

    // edge list (not the usual adjacency list)
    list <pair<int,int>> l;

public:
    Graph(int V){
        this->V = V;
    }

    void addEdge(int u, int v){
        l.push_back(make_pair(u,v));
    }

    // to find the subset in which the ith element is present
    int findSet(int i, int parent[]){

        if(parent[i]==-1){
            return i;
        }

        // return findSet(parent[i],parent);

        // path compression optimization 
        parent[i] = findSet(parent[i],parent);
        return parent[i];
    }

    // to union two elements which may or may not be part of the same subset
    void union_set(int x, int y, int parent[], int rank[]){

        int s1 = findSet(x,parent);
        int s2 = findSet(y,parent);

        // union by rank optimization (attaching set with lower rank to a set with higher rank)
        if(s1!=s2){
            
            if(rank[s1] < rank[s2]){
                parent[s1] = s2;
                rank[s2]+= rank[s1];
            }
            else{
                parent[s2] = s1;
                rank[s1]+= rank[s2];
            }
        }
    }

    bool contains_cycle(){
        // DSU logic to check if graph contains cycle or not
        int *parent = new int[V];
        
        // storing ranks(no. of nodes in a set) for rank optimization
        int *rank = new int[V];

        for (int i = 0; i < V; ++i)
        {
            parent[i] = -1;
            rank[i]=1;
        }

        // iterating over the edge list
        for(auto edge: l){
            int i = edge.first;
            int j = edge.second;

            int s1 = findSet(i,parent);
            int s2 = findSet(j,parent);

            if(s1!=s2){
                union_set(s1,s2,parent,rank);
            }
            else{
                // cycle present
                return true;
            }

        }

        delete [] parent;
        return false;
    }
};

void solve()
{
    Graph g(4);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,0);

    if(g.contains_cycle()){
        cout<<"Cycle is present";
    }
    else{
        cout<<"Cycle is not present";
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