#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void transfer(stack <int> &s1, stack <int> &s2, int n){

    for (int i = 0; i < n; ++i)
    {
        int x = s1.top();

        s1.pop();

        s2.push(x);
    }

}

void reverseStack(stack <int> &s1){

    stack <int> s2;

    int n = s1.size();

    for (int i = 0; i < n-1; ++i)
    {
        int x = s1.top();

        s1.pop();

        transfer(s1,s2,n-i-1);

        s1.push(x);

        transfer(s2,s1,n-i-1);
    }


}

void solve()
{
    stack <int> s;

    int n,temp;
    cin>>n;

    for (int i = 0; i < n; ++i)
    {
        cin>>temp;
        s.push(temp);
    }

    reverseStack(s);

    while(!s.empty()){

        cout<<s.top()<<endl;
        s.pop();
    }
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