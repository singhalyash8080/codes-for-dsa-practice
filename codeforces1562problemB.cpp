#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long int

void yashio();

void solve()
{
    int k;

    cin>>k;

    string s;

    cin>>s;

    int ansc, ansd;

    // cout<<s<<" ";

    bool f = 0;

    for (int i = 0; i < s.length(); ++i)
    {
        if(s[i]=='1' or s[i]=='4' or s[i]=='6' or s[i]=='8' or s[i]=='9'){
            ansc = 1;
            ansd = s[i]-'0';
            f=1;
            break;
        }
    }

    if(!f){

        ansc = 2;

        for (int i = 0; i < s.length(); ++i)
        {

            bool f = 0;

            for (int j = i+1; j < s.length(); ++j)
            {
                int x = (s[i]-'0')*10 + (s[j]-'0');
                if(x!=23 and x!=37 and x!=73 and x!=53){
                    ansd = x;
                    f=1;
                    break;
                }
            }

            if(f){
                break;
            }
        }

    }

    cout<<ansc<<endl<<ansd<<endl;
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
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
}