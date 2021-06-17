#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

template <typename T>
class Graph{

    map <T,list<T>> l;

public:
    void addEdge(T x, T y){

        l[x].push_back(y);
        l[y].push_back(x);
    }

    void dfs_helper(T src, map <T,bool> &visited){

        cout<<src<<" ";

        visited[src] = true;

        for(auto nbr:l[src]){

            if(!visited[nbr]){
                dfs_helper(nbr,visited);
            }
        }
    }

    void dfsComponentPrint(){

        map <T,bool> visited;

        for(auto node_pair:l){
            visited[node_pair.first]=false;
        }

        int cnt=0;

        for(auto node_pair:l){

            T node = node_pair.first;

            if(!visited[node]){

                cout<<"Component "<<cnt<<"--> ";

                dfs_helper(node,visited);
                cnt++;
                cout<<endl;
            }
        }
    }

};

void solve()
{
    Graph<int> g;

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(0,3);
    g.addEdge(0,4);

    g.addEdge(5,6);
    g.addEdge(6,7);

    g.addEdge(8,8);

    g.dfsComponentPrint();

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