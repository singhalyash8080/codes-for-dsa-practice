#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{
    int n;

    cin>>n;

    string s;

    cin>>s;

    set <string> se;

    string str="";

    for (int i = 0; i < s.length(); ++i)
    {
        str = "";

        str+=(s[i]);

        se.insert(str);

        if((i+1)<n)
        str+=(s[i+1]);

        se.insert(str);

        if((i+2)<n)
        str+=(s[i+2]);

        se.insert(str);


    }



    for (int i = 1; i <= 3; ++i)
    {
        string alph(i,'a');

        while(1){

            if(se.count(alph)==0){

                cout<<alph<<endl;
                return;
            }

            int j = i-1;

            while(j>=0 and alph[j]=='z'){
                alph[j]='a';
                j--;
            }

            if(j<0){
                break;
            }

            alph[j]++;
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