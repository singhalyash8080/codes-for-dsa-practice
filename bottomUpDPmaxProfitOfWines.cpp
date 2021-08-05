#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

int maxProfit(int wines[],int n){

    int dp[n][n] = {0};   

    for(int i=0;i<n;i++){

        dp[i][i] = n*wines[i];
    }

    vector <pair<int,int>> v;

    for (int i = 1; i < n; ++i){
        
        v.push_back({0,i});
    }

    for (int i = 0; i < v.size(); ++i){
        
        int x = v[i].first;
        int y = v[i].second;

        while(y<n){

            int op1 = wines[x]*(n-i-1) + dp[x+1][y];

            int op2 = wines[y]*(n-i-1) + dp[x][y-1];

            dp[x][y] = max(op1,op2);

            x++;
            y++;
        }

        // cout<<endl;
    }

    return dp[0][n-1];
}

void solve()
{
    int wines[] = {2,3,5,1,4};

    int n = sizeof(wines)/sizeof(int);

    cout<<maxProfit(wines,n);
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