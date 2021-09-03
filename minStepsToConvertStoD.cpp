#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

// ques
// convert s to d in min steps with following operations :
//     1) x+=a[i]
//     2) x-=a[i]
//     3) x^=a[i]

// output - min steps

int ans = INT_MAX;

void sol(int d, int s, int i,int cnt, vector <int> &arr){

    if(d<0 or d>100000 or i>=arr.size()){
        return;
    }
    else if(d==s){
        ans = min(cnt,ans);
        return;
    }

    int op1 = d - arr[i];

    sol(op1,s,i+1,cnt+1,arr);

    int op2 = d + arr[i];

    sol(op2,s,i+1,cnt+1,arr); 

    int op3 = d ^ arr[i];

    sol(op3,s,i+1,cnt+1,arr);

    sol(d,s,i+1,cnt,arr);
}

void solve()
{
    int s,d;

    cin>>s>>d;

    int n;

    cin>>n;

    vector <int> arr;

    for (int i = 0; i < n; ++i)
    {
        int tp;

        cin>>tp;

        arr.push_back(tp);
    }

    int cnt = 0;

    sol(d,s,0,cnt,arr);

    cout<<ans<<endl;

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
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
}