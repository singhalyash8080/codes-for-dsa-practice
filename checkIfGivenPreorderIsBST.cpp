#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{
    stack<int> st;

    int pre[] = {40, 30, 35, 80, 100};

    // int pre[] = {40, 30, 35, 20, 80, 100};

    int n = sizeof(pre)/sizeof(int);

    bool isBSTpossible = 1;

    int root = INT_MIN;

    for (int i = 0; i < n; ++i)
    {
        
        if(root > pre[i]){
            isBSTpossible = 0;
            break;
        }

        while(!st.empty() and st.top()<pre[i]){
            root = st.top(); 
            st.pop();
        }

        st.push(pre[i]);
    }

    (isBSTpossible)?cout<<"BST is possible for given preorder":cout<<"BST is not possible for given preorder";

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