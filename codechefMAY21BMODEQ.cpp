#include <bits/stdc++.h>
using namespace std;

#define int long long int

const int M = 5e5;

vector <vector <int>> factors(M);

void pre(){

    for (int i = 1; i <=M ; ++i)
    {
        for(int j=i;j<=M; j+=i){

            factors[j].push_back(i);
        }
    }
}

void yashio();

void solve()
{
    int n,m;

    cin>>n>>m;

    int ans=0;

    for (int i = 2; i <=n ; ++i)
    {
        int b=i;
        
        int x = (m - m%b);

        if(b>m){
            ans+=(b-1);
        }
        else{
            ans+=lower_bound(factors[x].begin(),factors[x].end(),b)-factors[x].begin();
        }

    }

    cout<<ans<<endl;

}

signed main()
{
    yashio();
    int T = 1;

    // for precomputing factors from 1 to M
    pre();
    cin>>T;
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