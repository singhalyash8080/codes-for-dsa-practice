#include <bits/stdc++.h>
using namespace std;

void yashio();

int first_occ(int *a,int n,int key){

	int ans= -1;

	int s=0,e=n-1,mid;


	while(s<=e){

		mid = (s+e)/2;

		if(a[mid]==key){
			ans=mid;
			e=mid-1;
		}
		else if(a[mid]<key){
			s=mid+1;
		}
		else{
			e=mid-1;
		}

	}

	return ans;
}

int last_occ(int *a,int n,int key){

	int ans= -1;

	int s=0,e=n-1,mid;


	while(s<=e){

		mid = (s+e)/2;

		if(a[mid]==key){
			ans=mid;
			s=mid+1;
		}
		else if(a[mid]<key){
			s=mid+1;
		}
		else{
			e=mid-1;
		}

	}

	return ans;
}

void solve()
{
	int a[]= {1,2,3,4,4,7,8,8,8,10,11};
	int n= sizeof(a)/sizeof(int);

	
	cout<<first_occ(a,n,8)<<endl;

	cout<<last_occ(a,n,8);


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