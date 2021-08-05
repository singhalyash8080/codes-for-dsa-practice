#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void printSubsequences(string s,set <string> &st){

    if(s.length()==1){
        st.insert(s);
        return;
    }

    for(int i=0;i<s.length();i++){

        string x = s;


        s.erase(s.begin()+i,s.begin()+i+1);

        st.insert(s);

        printSubsequences(s,st);

        s = x;
    }
}

void printSubsequences2(string s,set <string> &st2){

    int n = s.length();

    for (int i = 0; i < (1<<n); ++i)
    {
        string x="";

        for(int j=0;j<n;j++){

            if(i & (1<<j)){
                x+=s[j];
            }
        }

        st2.insert(x);
    }
}

void solve()
{
    string s;
    cin>>s;

    set <string> st,st2;

    // subsequence using recursion
    printSubsequences(s,st);

    //subsequence using bitmasking
    printSubsequences2(s,st2);

    st.insert(s);    

    for(auto x : st){
        cout<<x<<endl;
    }

    for(auto x : st2){
        cout<<x<<endl;
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