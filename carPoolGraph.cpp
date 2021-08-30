#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();


class graph{

    vector <int> *l;
    int V;

public:
    graph(int V){
        this->V = V;
        l = new vector<int>[V];
    }

    void addEdge(int a, int b){

        l[a].push_back(b);
        l[b].push_back(a);
    }

    void dfs(int src, vector <int> &visited, int &ans){

        visited[src] = 1;

        for(auto x : l[src]){

            ans+=1;
            if(!visited[x]){
                dfs(x,visited,ans);
            }
        }

    }

    int minFuelCons(){

        int ans = 0;

        
    }
};

void solve()
{
    vector <int> a = {1,1,1,9,9,9,9,7,8};
    vector <int> b = {2,0,3,1,6,5,4,0,0};

    int V = a.size();

    graph g(V+1);

    for (int i = 0; i < V; ++i)
    {
        g.addEdge(a[i],b[i]);
        // cout<<a[i]<<" "<<b[i]<<endl;
    }



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
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
}