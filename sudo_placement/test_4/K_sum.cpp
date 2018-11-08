#include <iostream>
#include <cstring>

using namespace std;

typedef struct Node{
	int data;
	struct Node* next;
}node;

node* getnode(int data){
	node *n = new node;
	n->data = data;
	n->next = NULL;

	return n;
}

node* insert(node* root, int data){
	if(root==NULL || data==0)
		return getnode(data);
	
	root->next = insert(root->next, data);
	return root;
}

void show(int p[], int m){
	for(int i=0;i<m;i++)
		cout<<p[i]<<" ";
	cout<<"\n";
} 

void disp(node* root){
	if(root!=NULL){
		cout<<root->data<<" ";
		disp(root->next);
	}

}

int main(){
	int t,n,k,tmp;

	cin>>t;
	while(t--){
		cin>>n>>k;

		int a[n],b[n/k +1];
		int sum;
		memset(b,0, sizeof(b));
		for(int i=0;i<n;i++)
			cin>>a[i];
		int p=0;
		for(int i=0;i<n;i+=k){
			sum=0;
			for(int j=0;j<k;j++)
				sum+=a[i+j];
			b[p]=sum;
			p++;
		}
		//show(b,n/k+1);
		node* root = NULL;
		root = insert(root,b[0]);

		for(int i=1;i<=(n/k); i++)
			insert(root,b[i]);

		disp(root);
		cout<<"\n";
	}
}