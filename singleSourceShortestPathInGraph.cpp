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

    void shortestSrcPath(T src){

        map <T,int> dist;

        queue <T> q;

        for(auto node_pair : l){
            T node = node_pair.first;
            dist[node] = INT_MAX;
        }

        q.push(src);

        dist[src] = 0;

        while(!q.empty()){

            T node = q.front();

            q.pop();

            for(auto nbr: l[node]){

                if(dist[nbr]==INT_MAX){
                    q.push(nbr);

                    dist[nbr]=dist[node]+1;
                }

            }
        }

        for(auto node_pair:l){
            T node = node_pair.first;
            int d = dist[node];

            cout<<"Node "<<node<<" dist from src "<<d<<endl;
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
    g.addEdge(4,5);
    g.addEdge(5,6);
    g.addEdge(6,3);

    g.shortestSrcPath(1);

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