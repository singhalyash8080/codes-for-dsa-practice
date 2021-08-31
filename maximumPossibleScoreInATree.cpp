#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

bool f = 0;

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

    void dfs(int src, vector <int> &visited,int mul,int &ans, int *wt){

        visited[src] = 1;

        mul*=wt[src];

        if(l[src].size()==1){

            if(mul>ans or ans == INT_MIN){
                ans = mul;
            }
            return;
        }

        // cout<<src<<endl;

        for(int i=0;i<l[src].size();i++){

            // cout<<x<<endl;

            int x = l[src][i];
            
            if(!visited[x]){
                dfs(x,visited,mul,ans,wt);
            }
        }

    }
};

void solve()
{
    int n;

    cin>>n;

    graph g(n+1);

    int start;

    cin>>start;

    int wt[n+1];

    for (int i = 0; i < n; ++i)
    {
        cin>>wt[i+1];
    }

    for (int i = 0; i < (n-1); ++i)
    {
        int s,e;

        cin>>s>>e;

        g.addEdge(s,e);

        // cout<<s<<" "<<e<<endl;

    }

    if(n==1){
        cout<<wt[0]<<endl;
    }

    vector <int> visited(n+1,0);

    int ans = INT_MIN;

    g.dfs(start,visited,1,ans,wt);

    cout<<ans<<endl;

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