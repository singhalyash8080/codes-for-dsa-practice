#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

// bottom up approach 
int knapSack(int W, int wt[], int val[], int n) 
{ 
   int dp[1001][1001] = {0};
   
   for(int i=0;i<=n;i++){
       
       for(int j=0;j<=W;j++){
           
          if((i-1)<0){
            //   dp[i][j]=0;
            continue;
          }
          else if((wt[i-1])<=j){
               
              int op1 = dp[i-1][j-wt[i-1]] + val[i-1];
               
              int op2 = dp[i-1][j];
               
              dp[i][j] = max(op1,op2);
          }
          else{
              dp[i][j] = dp[i-1][j];
          }
        
        // cout<<dp[i][j
       }
   }
   
   return dp[n][W];
}

void solve()
{
    
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