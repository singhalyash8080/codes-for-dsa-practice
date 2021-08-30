#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

bool isvowel(char c){

    if(c=='A' or c=='E' or c=='I' or c=='O' or c=='U'){
        return 1;
    }

    return 0;
}

int casen = 1;

void solve()
{
    string s;

    cin>>s;

    map <char,int> mp;

    for (int i = 0; i < s.length(); ++i)
    {
        mp[s[i]]=1;
    }

    int ans = INT_MAX;

    for(auto x : mp){

        char c = x.first;

        string y = s;

        int cnt = 0;

        for(int i=0;i<y.length();i++){

            if(y[i]!=c){

                if(isvowel(c) and !isvowel(y[i])){
                    cnt++;
                }
                else if(!isvowel(c) and isvowel(y[i])){
                    cnt++;
                }
                else{
                    cnt+=2;
                }
            }
        }

        ans = min(cnt,ans);
    }

    int cv=0,cc=0;

    int n = s.length();

    for (int i = 0; i < s.length(); ++i)
    {
        if(isvowel(s[i])){
            cv++;
        }
        else{
            cc++;
        }
    }

    if(cv==0 or cc==0){
        ans = min(n,ans);
    }

    cout<<"Case #"<<casen<<": "<<ans<<endl;

    casen++;
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