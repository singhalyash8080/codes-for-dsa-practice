#include <bits/stdc++.h>
using namespace std;

#define int long long int

class node{
public:
    int data;
    node *next;

    node(int d){

        data=d;
        next=NULL;
    }
};

void insertAtEnd(node *&head, int d){

    node *n = new node(d);

    node *temp = head;

    if(temp==NULL){
        head=n;
        return;
    }

    while(temp->next!=NULL){

        temp=temp->next;
    }

    temp->next=n;
}

void print(node *head){

    while(head!=NULL){

        cout<<head->data<<"->";
        head=head->next;
    }
}

void reverseKelem(node *&head,int k){

    vector <int> v;

    node *temp = head;

    while(temp!=NULL){

        v.push_back(temp->data);

        temp=temp->next;
    }

    int i=k-1;

    temp=head;

    while(i<v.size()){

        int x = k,y=i;

        while(x>0){

            temp->data=v[y];
            temp=temp->next;

            y--;
            x--;
        }
        i+=k;
    }
}

void yashio();

void solve()
{
    node *head=NULL;

    int n,k,temp;

    cin>>n>>k;

    while(n>0){
        cin>>temp;
        insertAtEnd(head,temp);
        n--;
    }

    cout<<"Before reversing every k elements : \n";
    print(head);

    cout<<endl; 

    reverseKelem(head,k);

    cout<<"after reversing every k elements : \n";
    print(head);
    
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