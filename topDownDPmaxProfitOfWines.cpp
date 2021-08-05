#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

map <pair<int,int>,int> dp;

int maxProfit(int wines[], int i, int j, int c){

    if(i>j){
        return 0;
    }
    else if(i==j){
        return (wines[i]*c);
    }
    else if(dp.find({i,j})!=dp.end()){
        return dp[{i,j}];
    }

    int op1 = wines[i]*c + maxProfit(wines, i+1,j,c+1);

    int op2 = wines[j]*c + maxProfit(wines,i,j-1,c+1);

    return dp[{i,j}] = max(op1,op2);

}

void solve()
{
    int wines[] = {2,3,5,1,4};

    int n = sizeof(wines)/sizeof(int);

    cout<<maxProfit(wines,0,n-1,1);
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