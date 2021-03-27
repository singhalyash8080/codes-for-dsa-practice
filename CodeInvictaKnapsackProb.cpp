#include <bits/stdc++.h>
using namespace std;

void yashio();

// Question link - https://www.codechef.com/CINV2021/problems/CINVIT03

// Test cases for this question
// 7
// 4 2
// 1 10 6 15
// 1 3
// 6 3
// 9 8 7 6 5 4
// 1 3 2
// 6 2
// 9 8 7 6 5 4
// 1 5
// 6 6
// 9 8 7 6 5 4
// 1 1 1 1 1 1
// 6 3
// 9 8 7 6 5 4
// 3 2 1
// 4 4
// 5 5 8 8
// 1 1 1 1
// 10 4
// 10 9 8 7 6 5 4 3 2 1
// 1 3 3 3

// Sol for test cases:
// 41
// 43
// 30
// 78
// 43
// 52
// 53


void solve()
{
	int n,m,temp;

	cin>>n>>m;

	vector <int> v1,v2;

	for (int i = 0; i < n; ++i)
	{
		cin>>temp;

		v1.push_back(temp);
	}

	for (int i = 0; i < m; ++i)
	{
		cin>>temp;

		v2.push_back(temp);
	}

	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());

	reverse(v1.begin(),v1.end());


	long int total=0;

	int j=0;

	for (int i = 0; i < m; ++i,++j)
	{
		if(v2[i]==1){
			total+=(v1[j]*2);
		}
		else{
			total+=v1[j];
		}

	}

	// sort(v2.begin(),v2.end());

	for (int i = 0; i < v2.size(); ++i)
	{
		if(v2[i]!=1){
			total+=(v1[j+v2[i]-2]);

			
			j+=(v2[i]-1);

		}

		// cout<<v2[i]<<" ";


	}

	cout<<total<<endl;

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