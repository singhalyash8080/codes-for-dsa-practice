#include <bits/stdc++.h>
using namespace std;

void yashio();

bool compare(string a,string b){

	if(a.length()==b.length()){
		return a<b;
	}
	else if(a.length()<b.length()){

		if(b.find(a)<b.length()){
			return 0;
		}
		else{
			return a<b;
		}
	}
	else{
		if(a.find(b)<a.length()){
			return 1;
		}
		else{
			return a<b;
		}
	}
	return 0;
}

void solve()
{
	int n;
	cin>>n;

	string s[1000];

	for (int i = 0; i < n; ++i)
	{
		cin>>s[i];
	}

	sort(s,s+n,compare);

	for (int i = 0; i < n; ++i)
	{
		cout<<s[i]<<endl;
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