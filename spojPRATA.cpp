#include <bits/stdc++.h>
using namespace std;

#define int long long int

//ques link - https://www.spoj.com/problems/PRATA/

void yashio();

bool canMakeIn(int *a, int l, int time, int p){

    int c=0,i=0;

    for (int i = 0; i < l; ++i)
    {
        int temp=time,j=1;

        while(temp>0){
            temp-=(a[i]*j);
            j++;

            if(temp>=0) c++;
        }
    }

    return c>=p;
}

void solve()
{
    int p,l,*a;

    cin>>p>>l;

    a = new int[l];

    for (int i = 0; i < l; ++i)
    {
        cin>>a[i];
    }

    sort(a,a+l);

    //here max is the max time to get the order done(time taken by fastest cook alone to cook all the prata)
    int temp = p,low=0,max=0,i=1;

    while(temp>0){

        temp--;
        max+=(a[0]*i);
        i++;
    }

    int ans = max;

    while(low<=max){

        //here mid is time taken to get the order done
        int mid = (low+max)/2;

        if(canMakeIn(a,l,mid,p)){
            ans=mid;
            max=mid-1;
        }
        else{
            low=mid+1;
        }
    }

    cout<<ans<<endl;

    // cout<<canMakeIn(a,l,7,p);

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