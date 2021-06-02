#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

int isDivisible3(string s){
    //complete the function here
    int pos = 0,rem = 0;
       
    for(int i=s.length();i>=0;i--){
        
        if(pos%2==0 and s[i]=='1'){
            rem+=(1);
        }
        else if(pos%2!=0 and s[i]=='1'){
            rem+=2;
        }
        
        if(rem%3==0){
            rem=0;
        }
        
        pos++;
    }
    
    return rem==0;
}

void solve()
{
    cout<<isDivisible3("1111");
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