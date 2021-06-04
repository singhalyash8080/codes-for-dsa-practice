#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

class graph{

    // Adj list
    unordered_map <string,list<pair<string,int>>> l; 

public:

    void addEdge(string x, string y, bool bidir, int wt){

        l[x].push_back(make_pair(y,wt));
        
        if(bidir)
            l[y].push_back(make_pair(x,wt));

    }

    void printAdjList(){

        for(auto p : l){

            string city = p.first;
            list<pair<string,int>> nbrs = p.second;

            cout<<city<<"->";
            for(auto nbr : nbrs){

                string dest = nbr.first;
                int dist = nbr.second;

                cout<<dest<<" "<<dist<<",";
            }

            cout<<endl;
        }
    }

};

void solve()
{
    graph g;

    g.addEdge("A","B",1,20);
    g.addEdge("B","D",1,40);
    g.addEdge("A","C",1,10);
    g.addEdge("C","D",1,40);
    g.addEdge("A","D",0,50);

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