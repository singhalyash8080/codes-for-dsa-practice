#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{
    queue <int> q;

    int n,temp;

    cin>>n;

    for (int i = 0; i < n; ++i)
    {
        cin>>temp;

        q.push(temp);
    }

    int prev = INT_MIN;

    for (int i = 0; i < n; ++i)
    {
        int minElem = INT_MAX;

        for(int j=0;j<(n);j++){

            int curr = q.front();

            if(curr>prev and curr<minElem){
                minElem = curr;
            }

            q.pop();

            q.push(curr); 
        }

        prev = minElem;


        int curr;

        for(int j=0;j<n;j++){

            curr = q.front();

            q.pop();

            if(curr!=minElem)
                q.push(curr); 
        }

        q.push(minElem);

        // cout<<minElem<<" ";

    }

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

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