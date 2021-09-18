#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

bool comp(pair<int,int> p1, pair<int,int> p2){

    return p1.first > p2.first;
}

void solve()
{
    int n;

    cin>>n;

    vector <pair<int,int>> v;

    for (int i = 0; i < n; ++i)
    {
        int d,f;

        cin>>d>>f;

        v.push_back({d,f});
    }

    sort(v.begin(),v.end(),comp);

    int td,fuel;

    cin>>td>>fuel;

    for (int i = 0; i < n; ++i)
    {
        v[i].first = td - v[i].first;

        // cout<<v[i].first<<" "<<v[i].second<<endl;
    }

    priority_queue <int> q;

    int ans = 0;

    bool f = 1;

    int prev = 0,next=0;

    while(next<n)
    {

        if ((v[next].first-prev)<=fuel)
        {
            fuel-=(v[next].first-prev);

            q.push(v[next].second);

            prev = v[next].first;

            next++;
        
        }else{

            if(q.empty()){
                f=0;
                break;
                
            }
            else{

                fuel+=q.top();
                q.pop();

                ans+=1;

            }
        }
        
    }

    int fdis = td - prev;

    while(fuel < fdis){

        if(q.empty()){
            f=0;
            break;
        }

        fuel+=q.top();
        q.pop();
        ans++;
    }

    if(f)
    cout<<ans<<endl;
    else
    cout<<(-1)<<endl;
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
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
}