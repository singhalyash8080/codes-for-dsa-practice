#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();


void solve()
{
    priority_queue<int> leftheap;
    priority_queue<int,vector<int>,greater<int>> rightheap;


    int d;
    cin>>d;

    leftheap.push(d);

    float med = d;

    cout<<"Median : "<<med<<endl;

    cin>>d;



    while(d!=-1){

        if(leftheap.size()>rightheap.size()){

            if(d<med){
                rightheap.push(leftheap.top());
                leftheap.pop();
                leftheap.push(d);
            }
            else{
                rightheap.push(d);
            }

            med = (leftheap.top() + rightheap.top())/2;
        }
        else if(leftheap.size()==rightheap.size()){

            if(d<med){
                leftheap.push(d);

                med = leftheap.top();
            }
            else{
                rightheap.push(d);
                med = rightheap.top();
            }
        }
        else{

            if(d>med){
                leftheap.push(rightheap.top());
                rightheap.pop();
                rightheap.push(d);
            }
            else{
                leftheap.push(d);
            }

            med = (leftheap.top() + rightheap.top())/2;
        }

        cout<<"Median : "<<med<<endl;
        cin>>d;
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