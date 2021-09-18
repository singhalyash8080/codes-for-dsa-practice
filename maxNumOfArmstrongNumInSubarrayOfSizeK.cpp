#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

int power(int x,int n){

    int res = 1;

    while(n){

        if(n & 1){
            res*=x;
        }

        n>>=1;

        x = x*x;

    }

    return res;
}

bool checkArmstrong(int n){

    string s = to_string(n);

    int num = 0;

    int len = s.length();

    for (int i = 0; i < len; ++i)
    {
        int temp =  (s[i]-'0');

        num += power(temp,len);
    }

    return num==n;
}

void solve()
{

    int n;

    cin>>n;

    int *arr = new int[n];

    for (int i = 0; i < n; ++i)
    {
        cin>>arr[i];

        if(checkArmstrong(arr[i])){
            arr[i]=1;
        }
        else{
            arr[i]=0;
        }
    }

    int k;

    cin>>k;

    int wAns = 0, mAns = 0;

    for (int i = 0; i < k; ++i)
    {
        if(arr[i]){
            wAns++;
        }
    }

    mAns = max(mAns,wAns);

    int idx = 0;

    for (int i = k; i < n; ++i)
    {
        if(arr[idx]){
            wAns--;
        }

        if(arr[i]){
            wAns++;
        }

        mAns = max(mAns,wAns);

        idx++;
    }


    cout<<mAns<<endl;
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