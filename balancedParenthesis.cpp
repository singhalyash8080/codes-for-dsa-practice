#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

bool areParenthesisValid(string str){

    stack <char> s;

    bool f=1;

    for (int i = 0; str[i]!='\0'; ++i)
    {
        if(str[i]=='('){
            s.push('(');
        }
        else if(str[i]==')'){

            if(s.empty()){
                f=0;
                break;
            }
            else if(s.top()=='('){
                s.pop();
            }

        }

    }

    if(!s.empty()){
        f=0;
    }

    return f;
}

void solve()
{
    string a;

    cin>>a;

    cout<<areParenthesisValid(a);
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