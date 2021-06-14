#include <bits/stdc++.h>
using namespace std;

// #define int long long int

void yashio();

void solve()
{
    string s;

    cin>>s;

    stack <char> st;

    int m = INT_MIN;

    for (int i = 0; i < s.length(); ++i)
    {

        if(s[i]=='('){
            st.push('(');
            int siz = st.size();

            m = max(siz,m);
        }
        else if(s[i]==')'){
            st.pop();
        }
    }

    cout<<m;
    
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