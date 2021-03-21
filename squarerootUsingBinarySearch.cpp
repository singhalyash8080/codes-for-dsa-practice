#include <bits/stdc++.h>
using namespace std;

void yashio();

float find_squareroot(int n,int p=0){

	int s=0,e=n;
	float ans=-1;

	while(s<=e){

		int mid = (s+e)/2;

		if(mid*mid == n){
			return mid;
		}

		if((mid*mid)<n){
			ans=mid;
			s=mid+1;
		}
		else{
			e=mid-1;
		}
	}

	float inc=0.1;

	for (int i = 1; i <= p; ++i)
	{
		while(ans*ans <= n){
			ans+=inc;
		}

		ans-=inc;
		inc/=10;
	}

	return ans;
}

void solve()
{
	int n;
	cin>>n;

	cout<<find_squareroot(n,4)<<endl;

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