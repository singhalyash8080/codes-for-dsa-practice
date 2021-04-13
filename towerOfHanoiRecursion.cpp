#include <bits/stdc++.h>
using namespace std;

#define int  long long int

void yashio();

void towerOfHanoi(int n,char src,char helper,char dest){

    if(n==0){
        return;
    }

    towerOfHanoi(n-1,src,dest,helper);

    cout<<"Moving disk "<<n<<" from "<<src<<" to "<<dest<<endl;

    towerOfHanoi(n-1,helper,src,dest);
}

void solve()
{
    int n;
    cin>>n;

    towerOfHanoi(n,'A','B','C');
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