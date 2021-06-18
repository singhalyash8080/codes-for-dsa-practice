#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

template <typename T>
class Graph{

    map <T,list<T>> l;
    int V;

public:
    Graph(int V){
        this->V = V;
    }

    void addEdge(T x, T y){
        l[x].push_back(y);
        l[y].push_back(x);
    }

    bool cycle_helper(T node, vector <bool> &visited, T parent){

        visited[node] = true;

        for(auto nbr : l[node]){

            if(visited[nbr]==false){

                bool cycleFound = cycle_helper(nbr,visited,node);

                if(cycleFound){
                    return true;
                }
            }
            else if(nbr!=parent){
                return true;
            }
        }

        return false;
    }

    bool containsCycle(){

        vector <bool> visited(V,false);

        return cycle_helper(0,visited,-1);

    }

};

void solve()
{
    Graph <int> g(5);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    // g.addEdge(4,0);

    g.containsCycle()?cout<<"Contains cycle ":cout<<"No cycle present";   

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