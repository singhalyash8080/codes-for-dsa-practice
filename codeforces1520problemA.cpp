#include <bits/stdc++.h>
using namespace std;
 
#define int long long int
 
void yashio();
 
void solve()
{
    int n;
 
    cin>>n;
 
    string s;
 
    cin>>s;
 
    bool f=1;
 
    int p=0,i=0;
 
 
    while(i<s.length())
    {
        char curr = s[i];
 
        while(curr==s[i]){
            i++;
        }
 
        for (int j = i; j < s.length(); ++j)
        {
            if(s[j]==curr){
                f=0;
            }
        }
    }
 
    if(f){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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