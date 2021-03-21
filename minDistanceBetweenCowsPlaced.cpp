#include <bits/stdc++.h>
using namespace std;

void yashio();

bool cowsCanBePlaced(int a[],int n,int c,int distance){

	int lastCowPos=a[0];

	int cnt=1;

	for (int i = 1; i < n; ++i)
	{
		if((a[i] - lastCowPos )>=distance){
			cnt++;
			lastCowPos = a[i];
		}

		if(cnt==c){
			return true;
		}
	}

	return false;
}

int minDistanceBetweenCowStalls(int a[],int n,int c){

	int s=0,e=a[n-1]-a[0],ans=-1;

	while(s<=e){

		int mid = (s+e)>>1;

		bool cowsPlaced = cowsCanBePlaced(a,n,c,mid);

		if(cowsPlaced){
			ans = mid;
			s= mid + 1;
		}
		else{
			e= mid - 1;
		}
	}

	return ans;
}


void solve()
{
	int n,c;

	cin>>n>>c;

	int a[10000];

	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	cout<<minDistanceBetweenCowStalls(a,n,c);

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