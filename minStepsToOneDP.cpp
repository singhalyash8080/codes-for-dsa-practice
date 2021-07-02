#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

// bottom up approach (DP)
int minSteps(int N) 
{ 
    int *a = new int[N+1];
    
    a[1]=0;
    
    for(int i=2;i<=N;i++){
        
        int x=N+1,y=N+2,z=a[i-1];
        
        if(i%2==0){
            x = a[i/2];
        }
        
        if(i%3==0){
            y = a[i/3];
        }
        
        a[i] = min(x,min(y,z))+1;
    }
    
    return a[N];
} 

void solve()
{
    int n;
    cin>>n;

    cout<<minSteps(n);
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