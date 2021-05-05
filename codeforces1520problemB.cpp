#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

void solve()
{
    int n;

    cin>>n;

    if(n>10){

    }

    int n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0;

    int temp=n,n_digits=0;

    while(temp>0){

        temp/=10;
        n_digits++;
    }

    for (int i = 0; i < n_digits; ++i)
    {
        n1+=1*pow(10,n_digits-i-1);
        n2+=2*pow(10,n_digits-i-1);
        n3+=3*pow(10,n_digits-i-1);
        n4+=4*pow(10,n_digits-i-1);
        n5+=5*pow(10,n_digits-i-1);
        n6+=6*pow(10,n_digits-i-1);
        n7+=7*pow(10,n_digits-i-1);
        n8+=8*pow(10,n_digits-i-1);
        n9+=9*pow(10,n_digits-i-1);

    }


    if(n>=n1 && n<n2){
        cout<<(1+(9*(n_digits-1)))<<endl;
    }
    else if(n>=n2 && n<n3){
        cout<<(2+(9*(n_digits-1)))<<endl;
    }
    else if(n>=n3 && n<n4){
        cout<<(3+(9*(n_digits-1)))<<endl;       
    }
    else if(n>=n4 && n<n5){
        cout<<(4+(9*(n_digits-1)))<<endl;
    }
    else if(n>=n5 && n<n6){
        cout<<(5+(9*(n_digits-1)))<<endl;
      
    }    
    else if(n>=n6 && n<n7){
        cout<<(6+(9*(n_digits-1)))<<endl;
        
    }
    else if(n>=n7 && n<n8){
        cout<<(7+(9*(n_digits-1)))<<endl;
        
    }
    else if(n>=n8 && n<n9){
        cout<<(8+(9*(n_digits-1)))<<endl;
        
    }
    else if(n>=n9){
        cout<<(9+(9*(n_digits-1)))<<endl;
        
    }
    else{
        cout<<((9*(n_digits-1)))<<endl;
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