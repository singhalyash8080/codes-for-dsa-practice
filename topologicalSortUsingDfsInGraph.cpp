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

    }

    void dfs_helper(T src, map <T,bool> &visited, list <T> &ordering){


        for (auto nbr : l[src]){
             if(!visited[nbr]){
                dfs_helper(nbr,visited,ordering);
             }
         }

        if(!visited[src])
        ordering.push_front(src); 

        visited[src] = true;

    }

    void toplogSortDfs(){

        map<T,bool> visited;

        list <T> ordering;        

        for(auto p:l){
            T node = p.first;
            visited[node] = false;
        }

        for(auto node_pair : l){

            T node = node_pair.first;

            dfs_helper(node,visited,ordering);

        }

        for(auto x : ordering){
            cout<<x<<" ";
        }
        cout<<endl;

    }

};

void solve()
{
    Graph <int>g;

    g.addEdge(6,3);
    g.addEdge(6,1);
    g.addEdge(5,1);
    g.addEdge(5,2);
    g.addEdge(3,4);
    g.addEdge(4,2);
    g.addEdge(2,1);


    g.toplogSortDfs();

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