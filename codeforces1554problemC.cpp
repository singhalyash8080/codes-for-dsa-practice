#include <bits/stdc++.h>
using namespace std;

// #define int long long int

void yashio();

int binToDec(string s){

    int num = 0,mul=1;

    for (int i = s.length()-1; i >= 0; --i)
    {
        num+=(mul*(s[i]-'0'));
        mul*=2;
    }

    return num;
}

string decToBin(int n){

    string s="";

    while(n>0){

        s+=((n%2)+'0');
        n/=2;
    }

    reverse(s.begin(),s.end());

    return s;
}

// string decToBin(int n)
// {
//     int binaryNum[32];
 
//     int i = 0;
//     while (n > 0) {
 
//         binaryNum[i] = n % 2;
//         n = n / 2;
//         i++;
//     }

//     string s="";

//     for (int j = i - 1; j >= 0; j--)
//         s+=(binaryNum[j]+'0');

//     return s;
// }

void solve()
{
    int n,m;

    cin>>n>>m;

    int p = (m+1);

    // bin representation of n
    string s1 = decToBin(n);

    // bin representation of (m+1)
    string s2 = decToBin(p);

    string ans="";

    int N = max(s1.length(),s2.length());

    if(s1.length()==N){

        string temp(N-s2.length(),'0');

        temp+=s2;

        s2=temp;
    }
    else{
        string temp(N-s1.length(),'0');

        temp+=s1;

        s1=temp;
    }

    int i;

    for (i = 0; i < N; ++i)
    {
        int b1,b2;

        b1=(s1[i]-'0');

        b2=(s2[i]-'0');

        if(b1==b2){
            ans+='0';
        }
        else if(b2==1 and b1==0){
            ans+='1';
        }
        else{
            break;
        }

        // cout<<ans<<endl;

    }

    while(i<N){
        ans+='0';
        i++;

    }

    cout<<binToDec(ans)<<endl;

    // cout<<s1<<" "<<s2<<" "<<ans<<" "<<binToDec(ans)<<endl;

    // cout<<binToDec(s1)<<" "<<binToDec(s2)<<" "<<binToDec(ans)<<endl;
    
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