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
    }

    bool cycle_helper(T node, vector <bool> &visited, vector <bool> &arr){

        visited[node] = true;
        arr[node] = true;

        for(auto nbr : l[node]){

            if(arr[nbr]==true){
                return true;
            }
            else if(visited[nbr]==false){

                bool cycleFound = cycle_helper(nbr,visited,arr);

                if(cycleFound){
                    return true;
                }
            }
        }

        arr[node] = false;
        return false;
    }

    bool containsCycle(){

        vector <bool> visited(V,false),arr(V,false);

        for(auto node_pair:l){

            T node = node_pair.first;

            if(cycle_helper(node,visited,arr)){
                return true;
            }
        }

        return false;

    }

};

void solve()
{
    Graph <int> g(6);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.addEdge(5,6);
    g.addEdge(1,5);
    g.addEdge(4,2);

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