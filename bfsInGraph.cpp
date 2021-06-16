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

    void bfs(T src){

        map <T,int> visited;

        queue <T> q;

        q.push(src);

        visited[src] = true;

        while(!q.empty()){

            T node = q.front();

            cout<<node<<" ";

            q.pop();

            for(auto nbr: l[node]){

                if(!visited[nbr]){
                    q.push(nbr);

                    visited[nbr]=true;
                }

            }
        }
    }
};

void solve()
{
    Graph <int>g;

    g.addEdge(1,2);
    g.addEdge(3,2);
    g.addEdge(3,4);
    g.addEdge(1,4);

    g.bfs(3);

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