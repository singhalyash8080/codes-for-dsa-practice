#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

// using dynamic programming
map <int,int> dp;

int isPossible(int x){

    int a[] = {11,111,1111,11111,111111,1111111,11111111,111111111};

    //memotization
    if(dp[x]!=0){

        if(dp[x]==-1){
            return false;
        }
        else{
            return true;
        }
    }

    // base case
    if(x<11){
        dp[x]=-1;
        return false;
    }

    for(auto y : a){
        if(x%y==0){
            dp[x]=1;
            return true;
        }
    }

    bool f = 0;

    for(auto y : a){

        f = f | isPossible(x-y);

        if(f){
            dp[x]=1;
            return true;
        }
    }

    dp[x]=-1;
    return false;

}

void solve()
{
    int x;

    cin>>x;

    if(isPossible(x)){
        cout<<"yes\n";
    }
    else{
        cout<<"no\n";
    }

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