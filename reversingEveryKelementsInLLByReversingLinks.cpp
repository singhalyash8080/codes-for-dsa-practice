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


// modified fundtion for reversing first k elements from the head
node* reverseLL(node *&head, int k){

    node *temp=head, *prev=NULL, *temp2;

    while(k>0){

        temp2=temp->next;
        temp->next=prev;

        prev=temp;
        temp=temp2;

        k--;
    }

    // head of reversed LL
    head = prev;

    // head of the unreversed LL 
    return temp;
}


// function for reversing every k elements and n is llSize/k
void reverseKelem(node *&head, int n, int k){

    // vector to store heads of n separate reversed ll
    vector<node*> v;

    node *currHead=head,*temp;

    for (int i = 0; i < n; ++i)
    {

        temp = reverseLL(currHead,k);

        v.push_back(currHead);

        if(i==0){
            head=currHead;
        }

        currHead = temp;
    }

    // loop for connecting the end of every head to next head in the vector
    for (int i = 0; i <v.size(); ++i)
    {

        int x = k;

        while(x>1){
            v[i]=v[i]->next;
            x--;
        }

        if(i==v.size()-1){

            v[i]->next = NULL;
        }
        else{

            v[i]->next=v[i+1];
        }

    }
}



void yashio();
 
void solve()
{
    node *head=NULL;

    int n,temp,k;

    cin>>n>>k;

    int llSize=n;

    while(n>0){
        cin>>temp;
        insertAtEnd(head,temp);
        n--;
    }

    cout<<"Before reversing every k elements : \n";
    print(head);

    cout<<endl; 

    reverseKelem(head,llSize/k,k);

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