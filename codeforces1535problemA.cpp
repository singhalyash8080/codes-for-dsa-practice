#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{
    int a,b,c,d;

    cin>>a>>b>>c>>d;

    vector <int> v;

    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);

    sort(v.begin(),v.end());

    int f1,f2;

    if(a>b){
        f1=a;
    }
    else{
        f1=b;
    }

    if(c>d){
        f2=c;
    }
    else{
        f2=d;
    }


    if((f1==v[2] and f2==v[3]) or ((f1==v[3] and f2==v[2]))){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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