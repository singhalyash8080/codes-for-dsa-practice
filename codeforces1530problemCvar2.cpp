#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{
    int n;

    cin>>n;

    vector <int> a,b;

    int tp;

    for (int i = 0; i < n; ++i)
    {
        cin>>tp;
        a.push_back(tp);
    }

    for (int i = 0; i < n; ++i)
    {
        cin>>tp;
        b.push_back(tp);
    }

    int x = n - n/4;

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int sum1=0,sum2=0;

    int i=n-x;

    while(i<n){
        sum1+=a[i];

        sum2+=b[i];

        i++;
    }

    int p1 = n-x, p2 = n-x-1;


    int c = 0;

    while(sum1<sum2){

        a.push_back(100);
        sum1+=100;

        n++;

        if(n%4==0){

            sum1-=a[p1];
            p1++;
        }
        else if(p2>=0){
            sum2+=b[p2];
            p2--;
        }

        c++;

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