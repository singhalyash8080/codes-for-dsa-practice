#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

// function to check if in this number of clicks are possible to complete the game without collision
bool collision(int *x, int *h,int n, int H, int clicks){

    int currHeight;

    bool coll = false;

    for (int i = 0; i < n; ++i)
    {
        if(x[i] <= clicks){
            
            currHeight = H + x[i];

            if(currHeight <= h[i]){
                coll = true;
                break;
            }
        }
        else{
            currHeight = (H + clicks) - (x[i]-clicks);

            if(currHeight <= h[i]){
                coll = true;
                break;
            }           
        }
    }

    return coll;
}

void solve()
{
    int n,H;

    cin>>n>>H;

    int *x = new int[n];

    int *h = new int[n];

    for (int i = 0; i < n; ++i)
    {
        cin>>x[i];
    }

    for (int i = 0; i < n; ++i)
    {
        cin>>h[i];
    }

    int minclicks = 0, maxclicks = x[n-1];

    int reqclicks,ans=0;

    bool possible=0;


    // cout<<collision(mp,x,h,n,H,1)<<endl;

    while(minclicks <= maxclicks){

        reqclicks = (minclicks + maxclicks)/2; 

        // cout<<reqclicks<<" "<<collision(x,h,n,H,reqclicks)<<endl;

        if(!collision(x,h,n,H,reqclicks)){
            possible=1;
            ans = reqclicks;
            maxclicks = reqclicks - 1;
        }
        else{
            minclicks = reqclicks + 1;
        }

    }

    // cout<<endl;

    if(possible){
        cout<<ans<<endl;    
    }
    else{
        cout<<(-1)<<endl;
    }
    

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