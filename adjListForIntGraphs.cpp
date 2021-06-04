#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

class graph{

    // to store number of vertices
    int V;

    // to store neighbours of each vertex
    list<int> *l;

public:

    graph(int V){
        this->V = V;
        l = new list<int>[V];
    }

    void addEdge(int x, int y){

        l[x].push_back(y);
        l[y].push_back(x);
    }

    void printAdjList(){

        for (int i = 0; i < V; ++i)
        {
            cout<<"vertex "<<i<<"->";
            for(int nbr : l[i]){
                cout<<nbr<<",";
            }

            cout<<endl;
        }
    }
};

void solve()
{
    graph g(4);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(2,3);
    g.addEdge(1,2);

    g.printAdjList();

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