#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{
    int n,*a;

    cin>>n;

    a = new int[n];

    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }

    int c=0;

    vector <int> e,o;

    for (int i = 0; i < n; ++i)
    {
        if(a[i]%2==0){
            e.push_back(a[i]);
        }
        else{
            o.push_back(a[i]);
        }
    }

    vector <int> b;

    for (int i = 0; i < e.size(); ++i)
    {
        b.push_back(e[i]);
    }

    for (int i = 0; i < o.size(); ++i)
    {
        b.push_back(o[i]);
    }


    for (int i = 0; i < n; ++i)
    {
        for(int j=i+1;j<n;++j){

            if(__gcd(b[i],2*b[j])>1){
                c++;
            }
        }
    }

    cout<<c<<endl;
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