#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{
    int x,r,m;

    cin>>x>>r>>m;

    int t1=(r*60),t2=(m*60),total;

    if(t1>t2){
        cout<<"NO"<<endl;
    }
    else{

        if(t1>x){
            total = x + (t1-x)*2;
            
            if(total<=t2){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"YES"<<endl;
        }

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