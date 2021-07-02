#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

// top down dp approach for max sales of wines
int maxSale(int *a, int t,int i, int j, int dp[100][100]){

    if(dp[i][j]!=0){
        return dp[i][j];
    }

    if((j-i)==1){
        return a[i]*t;
    }

    int op1 = a[i]*t + maxSale(a,t+1,i+1,j,dp);

    int op2 = a[j-1]*t + maxSale(a,t+1,i,j-1,dp);

    return dp[i][j] = max(op1,op2);
}

void solve()
{
    int n, *a;

    cin>>n;

    a = new int[n];

    // dp array to store the starting and ending point of array
    int dp[100][100] = {0};

    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }

    cout<<maxSale(a,1,0,n,dp)<<endl;
    
}

signed main()
{
    yashio();
    int T = 1;
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