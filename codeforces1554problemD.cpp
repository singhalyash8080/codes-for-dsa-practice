#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{
    int n;

    cin>>n;

    if(n==1){
    	cout<<"a"<<endl;
    	return;
    }

    int k = (n/2);


    string s1(k,'a'),s2(k-1,'a');


    if(n%2!=0){

    	cout<<(s1+"b"+s2+"c")<<endl;
    }
    else{
    	cout<<(s1+"b"+s2)<<endl;
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