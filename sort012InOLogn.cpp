#include <bits/stdc++.h>
using namespace std;

void yashio();

void swapp(int *a,int *b){

	(*a)+=(*b);

	(*b)=(*a)-(*b);

	(*a)-=(*b);
}

void sort012(int *a,int n){

	int s=0,e=n-1;

	int m=(s+e)/2;

	while(m<e){

		if(a[m]==1){
			m++;
		}
		else if(a[m]==0){

			swapp(&a[s++],&a[m]);
		}
		else{
			swapp(&a[e--],&a[m]);
		}
	}

}

void solve()
{
	int n;
	cin>>n;

	int a[1000];

	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	sort012(a,n);

	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<endl;
	}



}

signed main()
{
    yashio();
    int T = 1;
    // cin>>T;
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