#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

int power(int x,int y)
{
    int res = 1;
    x = x;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x);
        y = y>>1;
        x = (x*x);
    }
    return (res);
}

void solve()
{
    int n,q,*a;

    cin>>n>>q;

    a=new int[n];

    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }

    int type,l,r,x,y;


    for (int i = 0; i < q; ++i)
    {
        cin>>type;

        if(type==1){
            cin>>l>>r>>x;

            for (int i = l-1; i <r; ++i)
            {
                a[i]+=power((x+i-l+1),2);
            }
        }
        else{
            cin>>y;

            cout<<a[y-1]<<endl;    
        }
    
        
    }


}

signed main()
{
    yashio();
    int T = 1;
    // cin>>T;
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