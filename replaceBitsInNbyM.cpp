#include <bits/stdc++.h>
using namespace std;

// test case example:
// 512 i.e 1000000000
// 21 i.e 10101
// 2
// 6

// Output:
// 533 i.e 1000010101

void yashio();

void clearBitsInRange(int &n,int i,int j){

	int mask = (((~0)<<(j+1)) | ((1<<i)-1));
	
	n= n & mask;
}

void solve()
{
    int n,m,i,j;

    cin>>n>>m>>i>>j;


    clearBitsInRange(n,i,j);

    n |=m;

    cout<<(n);


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