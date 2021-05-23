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

node* insertAtEnd(node *&head, int d){

    node *n = new node(d);

    node *temp = head;

    if(temp==NULL){
        head=n;
        return n;
    }

    while(temp->next!=NULL){

        temp=temp->next;
    }

    temp->next=n;

    return n;
}

void print(node *head){

    while(head!=NULL){

        cout<<head->data<<"->";
        head=head->next;
    }
}

void insertProperly(node *&head, node *temp){

    node *temp2 = head;

    if(head == NULL || temp2->data>=temp->data){

        head = temp;
        temp->next = NULL;
        return;
    }


    while(temp2->next!=NULL and temp->data > temp2->next->data ){
        temp2 = temp2->next;
    }

    temp->next = temp2->next;

    temp2->next = temp;
}

node* insertionSortLL(node *head){

    node *sorted = NULL, *temp = head,*temp2;

    while(temp!=NULL){

        temp2 = temp->next;

        insertProperly(sorted,temp);

        temp = temp2;

    }

    return sorted;
}


void solve()
{
    node *head=NULL;

    insertAtEnd(head,1);
    insertAtEnd(head,8);
    insertAtEnd(head,5);
    insertAtEnd(head,4);
    insertAtEnd(head,2);
    insertAtEnd(head,9);
    insertAtEnd(head,6);

    node *sorted = insertionSortLL(head);

    print(sorted);





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