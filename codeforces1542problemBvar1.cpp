#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();


void solve()
{
    int x,a,b;

    cin>>x>>a>>b;

    bool f=0;

    if(x==1 or (x-1)%b==0){
        f=1;
    }

    double temp2 = (log2(x)/log2(a));

    if((temp2 - (int)temp2)==0){
        f=1;
    }


    int temp = a;

    if(a!=1)
    while(temp<=(x)){

        if((x-temp)%b==0){
            f=1;
            break;
        }    

        temp*=a;
    }
    


    if(f){
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