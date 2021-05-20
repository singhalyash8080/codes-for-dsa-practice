 #include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void subsequences(char *inp, char *out, int i, int j){

    if(inp[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }

    out[j]=inp[i];

    subsequences(inp,out,i+1,j+1);

    subsequences(inp,out,i+1,j);

}

void solve()
{
    char inp[]="abc",out[100];

    subsequences(inp,out,0,0);
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