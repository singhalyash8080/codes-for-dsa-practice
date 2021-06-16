#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

// unweighted graph
template <typename T>
class Graph{

    map<T,list<T>> l;

public:
    void addEdge(T x, T y){

        l[x].push_back(y);
        l[y].push_back(x);

    }

    // helper function that will traverse the graph
    void dfs_helper(T src, map <T,bool> &visited){

        cout<<src<<" ";
        visited[src] = true;

        // going to all the neighbours of that node that are not visited
        for (auto nbr : l[src])
         {
             if(!visited[nbr]){
                dfs_helper(nbr,visited);
             }
         } 
    }

    void dfs(T src){

        map<T,bool> visited;

        // marking all the nodes as not visited in the begining
        for(auto p:l){
            T node = p.first;
            visited[node] = false;
        }

        dfs_helper(src,visited);
    }

};

void solve()
{
    Graph <int>g;

    g.addEdge(1,2);
    g.addEdge(3,2);
    g.addEdge(3,4);
    g.addEdge(1,4);
    g.addEdge(4,5);


    g.dfs(3);

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