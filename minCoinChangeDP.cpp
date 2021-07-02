#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

// DP top down approach to find min coins required to form V
int minCoins(int coins[], int M, int V, map <int,int> mp) 
{ 
    
    // memotization
    if(mp.count(V)){
        return mp[V];
    }

    // base case
    
    if(V==0){
        return 0;
    }
    else if(V<0){
        return -1;
    }
    
    int ans = -1;
    
    for(int i=0;i<M;i++){
        
        int temp = minCoins(coins,M,V-coins[i],mp);
        
        if(temp!=-1){
            
            if(ans==-1){
                ans = temp + 1;
            }
            else{
                ans = min(ans,temp+1);
            }
            
        }
    }
    
    // cout<<"V : "<<V<<" "<<ans<<endl;
    mp[V] = ans;
    
    return ans;
} 
void solve()
{
    map <int,int> mp;

    int V,M,*coins;

    cin>>V>>M;

    coins = new int[M];

    for (int i = 0; i < M; ++i)
    {
        cin>>coins[i];
    }

    cout<<minCoins(coins,M,V,mp);
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