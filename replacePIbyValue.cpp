#include <bits/stdc++.h>
using namespace std;

#define int  long long int

void yashio();

void replacePiByValue(char a[],int i){

    if(a[i]=='\0' or a[i+1]=='\0'){
        return;
    }

    if(a[i]=='p' and a[i+1]=='i'){

        int j=i+2;

        while(a[j]!='\0'){
            j++;
        }

        while(j>=(i+2)){

            a[j+2]=a[j];
            j--;
        }

        a[i]='3';
        a[i+1]='.';
        a[i+2]='1';
        a[i+3]='4';

        replacePiByValue(a,i+4);
    }

    replacePiByValue(a,i+1);



}

void solve()
{
    char a[1000];

    cin>>a;

    replacePiByValue(a,0);

    cout<<a;
    
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