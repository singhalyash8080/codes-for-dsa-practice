#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

char keypad[][10]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};

void generate_names(char *inp, char *out, int i, int j){

    if(inp[i]=='\0'){

        out[j]='\0';

        cout<<out<<endl;

        return;
    }

    // current digit 
    int digit = inp[i] - '0';

    if(digit==1 || digit==0){
        generate_names(inp,out,i+1,j); 
    }

    for (int k = 0; keypad[digit][k]!='\0'; ++k)
    {
        out[j] = keypad[digit][k];

        generate_names(inp,out,i+1,j+1);
    }

    return;
}

void solve()
{
    char inp[100],out[100];

    cin>>inp;

    generate_names(inp,out,0,0);
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