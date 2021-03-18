#include <bits/stdc++.h>
using namespace std;

void yashio();

int findIndexInSortedAndRotated(int *a,int n,int key){

	int s=0,e=n-1;

	int mid;

	while(s<=e){

		mid = (s+e)/2;

		if(a[mid]==key){
			return mid;
		}
		else if(a[s]<=a[mid]){

			if(a[s]<=key && a[mid]>=key){
				e=mid-1;
			}
			else{
				s=mid+1;
			}
		}
		else{

			if(a[mid]<=key && a[e]>=key){
				s=mid+1;
			}
			else{
				e=mid-1;
			}
		}
	}

	return -1;
}

void solve()
{
	int a[]= {4,7,8,10,11,1,2,3};
	int n= sizeof(a)/sizeof(int);
	
	cout<<findIndexInSortedAndRotated(a,n,8);


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