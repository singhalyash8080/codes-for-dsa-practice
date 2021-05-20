#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void generateBrackets(char *out, int n, int i, int open, int close){

    if(i==(2*n)){
        out[i]='\0';
        cout<<out<<endl;
        return;
    }

    if(open<n){
        out[i]='(';
        generateBrackets(out,n,i+1,open+1,close);
    }

    if(close<open){
        out[i]=')';
        generateBrackets(out,n,i+1,open,close+1);
    }

}

void solve()
{

    char out[100];

    int n;

    cin>>n;

    generateBrackets(out,n,0,0,0);
    
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