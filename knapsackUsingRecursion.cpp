#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

int knapsack(int n, int cap, int *wt, int *prices){

    if(n==0 or cap==0){
        return 0;
    }

    int opt1=0;

    if(wt[n-1]<=cap) opt1 = prices[n-1] + knapsack(n-1,cap-wt[n-1],wt,prices);

    int opt2 = knapsack(n-1,cap,wt,prices);

    return max(opt1,opt2);

}

void solve()
{
    int wt[]={1,2,3,5};

    int prices[]={40,20,30,100};

    cout<<knapsack(4,7,wt,prices);
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