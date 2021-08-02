#include <bits/stdc++.h>
using namespace std;

#define int long long int

void yashio();

// hashmap using separate chaining technique
template <typename T>
class Node{

public:
	string key;
	T value;

	Node<T>*next;

	Node(string key, T val){

		this->key = key;
		value = val;
		next = NULL;
	}

	~Node(){

		if(next!=NULL){
			delete next;
		}
	}
};

template <typename T>
class Hashtable{

	Node <T> **table;
	int current_size;
	int table_size;

	int hashfn(string key){

		int idx = 0;

		int p = 1;

		for (int i = 0; i < key.length(); ++i)
		{
			idx += (key[i]*p)%table_size;

			idx%=table_size;

			p = (p*27)%table_size;
		}

		return idx;
	}

	void rehash(){

		Node <T> **oldTable = table;

		table_size = 2*table_size;

		table = new Node<T>*[table_size];

		for (int i = 0; i < table_size; ++i)
		{
			table[i] = NULL;
		}

		current_size = 0;

		for (int i = 0; i < table_size/2; ++i)
		{
			Node<T>*temp = oldTable[i];

			while(temp!=NULL){

				insert(temp->key,temp->value);
				temp = temp->next;
			}

			if(oldTable[i]!=NULL){
				delete oldTable[i];
			}
		}

		delete [] oldTable;
	}

public:
	Hashtable(int ts=7){
		table_size = ts;
		table = new Node<T>*[table_size]; 
		current_size = 0;

		for (int i = 0; i < table_size; ++i)
		{
			table[i] = NULL;
		}
	}

	void insert(string key, T value){

		int idx = hashfn(key);

		// inserting at the beg
		Node<T> *n = new Node<T>(key,value);

		n->next = table[idx];

		table[idx] = n;

		current_size++;

		//rehash

		float load_factor = current_size/(1.0*table_size);

		if(load_factor > 0.7){
			rehash();
		}
	}

	void print(){

		for (int i = 0; i < table_size; ++i)
		{
			cout<<"Bucket "<<i<<" ->";

			Node<T> *temp = table[i];

			while(temp!=NULL){

				cout<<temp->key<<"->";
				temp = temp->next;
			}

			cout<<endl;
		}
	}

	// T search(string key){

	// }

	// void erase(string key){

	// }

};

void solve()
{
    Hashtable<int>price_menu;

    price_menu.insert("burger",120);
    price_menu.insert("pepsi",20);
    price_menu.insert("Pizza",88);
    price_menu.insert("noodles",76);
    price_menu.insert("coke",11);

    price_menu.print();

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