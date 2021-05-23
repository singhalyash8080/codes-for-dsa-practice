#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

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


void appendLastKelem(node *&head, int n, int k){

    node *first = head, *temp = head;

    int x = 1;

    while(x!=(n-k)){
        temp=temp->next;
        x++;
    }

    node *temp2 = temp->next;

    temp->next = NULL;

    head = temp2;

    x = 1;

    while(x!=k){
        temp2=temp2->next;
        x++;
    }

    temp2->next = first;

}


void solve()
{
    node *head=NULL;

    int n,k,temp;

    cin>>n;


    for (int i = 0; i < n; ++i)
    {
        cin>>temp;

        insertAtEnd(head,temp);
    }

    cin>>k;

    print(head);
    cout<<"\nafter appending last k elements to the front : \n";
    appendLastKelem(head,n,k);

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