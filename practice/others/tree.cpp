#include <iostream>
#include <climits>
using namespace std;

typedef struct Node{
	int data;
	int height;
	struct Node* left, *right;
}node;

node* newnode(int data, int h){
	node *ptr = new node;
	ptr->data = data;
	ptr->height = h;
	ptr->left=NULL;
	ptr->right=NULL;

	return ptr;
}

node* insert(node*root, int data, int h){
	if(root == NULL){
		return newnode(data, h);
	}

	if(data<=root->data)
		root->left = insert(root->left, data, h+1);
	else
		root->right = insert(root->right, data, h+1);
}
int Max = INT_MIN;
int inorder(node *root){
	if(root == NULL)
		return 0;

	if(root!= NULL){
		int l = 1+inorder(root->left);
		int r = 1+inorder(root->right);
		Max = max(Max, l+r-1); 
		//cout<<root->data<<": "<<l-1<<" "<<r-1<<"\n";
		return max(l,r);
		//
	}
}


int main(){
	node* root = NULL;
	int n,t;
	cin>>n;
	cin>>t;
	root = insert(root, t, 0);
	//cout<<t<<" ";
	while(--n){
		cin>>t;
		//cout<<t<<" ";
		insert(root, t,0);
	}
	
	inorder(root);
	cout<<Max<<"\n";
}