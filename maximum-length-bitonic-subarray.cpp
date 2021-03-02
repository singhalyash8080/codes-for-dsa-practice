#include <bits/stdc++.h>
using namespace std;

void yashio();


void solve()
{
	int a[]= {12, 4, 78, 90, 45, 23};
	int n= sizeof(a)/sizeof(int);

	int inc[1000],dec[1000];

	inc[0]=1,dec[n-1]=1;

	for (int i = 1; i < n; ++i)
	{
		inc[i] = (a[i]>a[i-1]) ? inc[i-1]+1 : 1;
	}

	for (int i = n-2; i >= 0; --i)
	{
		dec[i] = (a[i]>a[i+1]) ? dec[i+1]+1 : 1;
	}

	int max=0;

	for (int i = 0; i < n; ++i)
	{
		max = (max < (inc[i]+dec[i]-1)) ? (inc[i]+dec[i]-1) : max;

		// cout<<inc[i]<<" "<<dec[i]<<endl;
	}

	cout<<max;

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