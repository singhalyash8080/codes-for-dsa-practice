#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

class Graph{

    // adjacency list
    vector <pair<int,int>> *l;
    int V;

public:
    Graph(int n){
        V = n;
        l = new vector<pair<int,int> >[n];
    }

    void addEdge(int x, int y, int w){
        l[x].push_back({y,w});
        l[y].push_back({x,w});
    }

    int prim_mst(){

        priority_queue <pair<int,int>, vector <pair<int,int>>, greater <pair<int,int>>> Q;


       // another array that denotes whether a node has been included in MST or not
       bool *visited = new bool[V]{0};

       int ans = 0;

       Q.push({0,0}); // weight and node

       while(!Q.empty()){

        // pick the edge with min weight

        auto best = Q.top();
        Q.pop();

        int to = best.second;
        int weight = best.first;

        if(visited[to]){

            // discard the edge and continue
            continue;
        }

        ans+=weight;
        visited[to] = 1;

        // add the new edges in the queue
        for(auto x: l[to]){

            if(visited[x.first]==0){
                Q.push({x.second,x.first});
            }
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

    cout<<g.prim_mst();
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