#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{
    int n,k;

    cin>>n>>k;

    string s;

    cin>>s;

    int *q = new int[k];

    int dis=0;

    for (int i = 0; i < k; ++i)
    {
        cin>>q[i];
    }

    int f1,f2,f3;


    for (int i = 0; i < n-1; ++i)
    {

        f1 = s[i] -'0';
        f2 = s[i+1] - '0';

        if(f1!=f2){
            dis+=1;
        }
        else{
            dis+=2;
        }
        
    }

    // cout<<dis<<endl;

    for (int i = 0; i < k; ++i)
    {

        if(s[q[i]-1]=='1'){
            s[q[i]-1]='0';
        }
        else{
            s[q[i]-1]='1';    
        }
        
        if((q[i]-2)>=0){
            f1 = s[q[i]-2] - '0';
        }
        else{
            f1=-1;
        }
        
        f2 = s[q[i]-1] - '0';

        if((q[i])<n){
            f3 = s[q[i]] - '0';    
        }
        else{
            f3=-1;
        }


        if(n==1){
            cout<<0<<endl;
        }
        else{

            if(f1!=-1 and f3!=-1){

                // cout<<"yes1 ";

                if(f1!=f2){
                    dis-=1;
                }
                else{
                    dis+=1;
                }

                if(f2!=f3){
                    dis-=1;
                }
                else{
                    dis+=1;
                }                

            }
            else if(f1!=-1 and f3==-1){

                // cout<<"yes2 ";

                if(f1!=f2){
                    dis-=1;
                }
                else{
                    dis+=1;
                }

            }
            else if(f1==-1 and f3!=-1){

                // cout<<"yes3 ";

                if(f2!=f3){
                    dis-=1;
                }
                else{
                    dis+=1;
                }  

            }

            cout<<dis<<endl;
        }       

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