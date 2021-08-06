#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

// // bottom up dp
// int numOfWaysToReachN(int n,int k){

//     int *dp = new int[n+1];

//     dp[0] = 1;

//     for (int i = 1; i <=n ; ++i)
//     {
//         int sum = 0;

//         for(int j=1;j<=k;j++){

//             if((i-j)>=0)
//             sum+=dp[i-j];
//         }

//         dp[i] = sum;
//     }

//     return dp[n];
// }

// optimized bottom up approach
int numOfWaysToReachN(int n, int k){

    int *dp = new int[n+1];

    dp[0] = 1;

    int sum = 1;
    for (int i = 1; i <= k ; ++i)
    {
        dp[i] = sum;
        sum+=dp[i];
    }

    for (int i = k+1; i <=n ; ++i)
    {
        dp[i] = 2*dp[i-1] - dp[i-k-1];
    }

    return dp[n];
}

// // top down dp
// map<pair<int,int>,int> dp; 
// int numOfWaysToReachN(int n, int k){

//     if(n==0){ 
//         return 1;
//     }
//     else if(k==0 or n<0){
//         return 0;
//     }
//     else if(dp.find({n,k})!=dp.end()){
//         return dp[{n,k}];
//     }

//     int ans = 0;

//     for (int i = 1; i <=k ; ++i)
//     {
//         ans+=numOfWaysToReachN(n-i,k);
//     }

//     return dp[{n,k}] = ans;
// }

void solve()
{
    cout<<numOfWaysToReachN(3,2);
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