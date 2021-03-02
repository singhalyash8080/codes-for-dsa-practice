#include <bits/stdc++.h>
using namespace std;

void yashio();

int kadanes(int a[],int n){

	int currSum=0,maxSoFar=INT_MIN;

	for (int i = 0; i < n; ++i)
	{
		currSum+=a[i];

		if(currSum<0){
			currSum=0;
		}

		if(currSum>maxSoFar){
			maxSoFar=currSum;
		}
	}

	return maxSoFar;

}

int circularSubarraySum(int a[],int n){

	int max_no_wrap_sum=kadanes(a,n),max_wrap_sum;

	if(max_no_wrap_sum<0){
		return max_no_wrap_sum;
	}

	int arrSum=0;

	for (int i = 0; i < n; ++i)
	{
		a[i]=-a[i];
		arrSum+=a[i];
	}

	max_wrap_sum = -(arrSum - kadanes(a,n));

	return (max_wrap_sum > max_no_wrap_sum) ? max_wrap_sum : max_no_wrap_sum;
}


void solve()
{
	int a[]= {5,-3,-2,4,1,5,-3,-2,4,1};
	int n= sizeof(a)/sizeof(int);


	cout<<circularSubarraySum(a,n);



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