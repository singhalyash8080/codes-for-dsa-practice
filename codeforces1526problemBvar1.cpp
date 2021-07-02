#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

// using maths to derive that if (x - 111*b)%11==0 and >=0 then yes (where b=[0,10])
void solve()
{
    int x;

    cin>>x;

    int temp = x%11;

    int temp2 = x - 111*temp;

    if(temp2>=0 and temp2%11==0){
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