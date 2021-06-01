#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{
    int n,temp;

    cin>>n;

    stack <int> s,s2;

    for (int i = 0; i < n; ++i)
    {
        cin>>temp;

        if(temp==1){
            s.push(temp);
        }
        else{

            while(!s.empty() and (temp-1)!=s.top()){
                s.pop();
            }

            s.pop();

            s.push(temp);
        }

        while(!s.empty()){
            s2.push(s.top());
            s.pop();
        }

        while(!s2.empty()){

            cout<<s2.top();

            if(s2.size()>1){
                cout<<".";
            }
            s.push(s2.top());

            s2.pop();
        }

        cout<<endl;
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