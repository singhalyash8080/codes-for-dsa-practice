#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

// fibonacci nums - 0(0th fib no.),1(1th fib no.),1,2,3,5,8

// top down apporoach (recursion + memotisation)
int fib(int n, int *dp){

    if(n==0 or n==1){
        return n;
    }

    if(dp[n]!=0){
        return dp[n];
    }

    int ans;
    ans = fib(n-1,dp) + fib(n-2,dp);

    return dp[n] = ans;
}

// bottom up approach 
int fibBottomUp(int n){

    int *dp = new int[n+1];

    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; ++i)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
}


// bottom up apporoach with optimized space
int fibBottomUpOptimized(int n){

    int a = 0;
    int b = 1;

    int c;

    for (int i = 2; i <= n; ++i)
    {
        c = a+b;
        a = b;
        b = c;
    }

    return c;
}


void solve()
{
    int n;
    cin>>n;

    int *dp = new int[n+1];

    for (int i = 0; i <= n; ++i)
    {
        dp[i]=0;
    }

    cout<<fib(n,dp)<<endl;

    cout<<fibBottomUp(n)<<endl;
    
    cout<<fibBottomUpOptimized(n);


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