#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{
    int n,m;

    cin>>n>>m;

    char *a = new char[n];

    for (int i = 0; i < n; ++i)
    {
           cin>>a[i];
    }

    vector <int> v;

    if(m>=1000){
        m=1000;
    }

    for (int i = 0; i < m; ++i)
    {
        
        for (int j = 0; j < n; ++j)
        {
            if(j==0 and a[j+1]=='1'){
                v.push_back(j);
            }
            else if(j==(n-1) and a[j-1]=='1'){
                v.push_back(j);
            }
            else{
                if((a[j-1]=='1' and a[j+1]=='0') or (a[j-1]=='0' and a[j+1]=='1')){
                    v.push_back(j);
                }    
            }
        }

        for(int k=0;k<v.size();k++){
            a[v[k]]='1';
        }

        v.clear();       
    }   

    for (int i = 0; i < n; ++i)
    {
        cout<<a[i];
    }
    cout<<endl;
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