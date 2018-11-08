#include <iostream>

using namespace std;

typedef struct Node{
	int data;
	struct Node* left, *right;
}node;

node* getnode(int data){
	node *n = new node;
	n->data = data;
	n->left=NULL;
	n->right=NULL;

	return n;
}

node* insert(node* root, int data){
	

	if(root==NULL)
		return getnode(data);
	else if(data>root->data)
		root->right =  insert(root->right,data);
	else
		root->left =  insert(root->left,data);
	return root;
}

void disp(node* root){
	if(root!=NULL){
		disp(root->left);
		disp(root->right);
		cout<<root->data<<" ";
	}
}

void skip(node* root, int data){
	//if((root->left)->data == data)
	//	 return;

	if(root != NULL && root->data != data){
		skip(root->left,data);
		skip(root->right,data);
		cout<<root->data<<" ";
	}

}
int main(){
	int t,n,tmp,k;

	cin>>t;
	while(t--){
		cin>>n>>k;
		node *root = NULL;
		cin>>tmp;
		root = insert(root,tmp);
		for(int i=1;i<n;i++){
			cin>>tmp;
			insert(root,tmp);
		}
		node* ptr;
		for(int i=0;i<k;i++){
			cin>>tmp;
			//ptr = root;
			skip(root,tmp);
			//disp(root);
			cout<<"\n";
		}

		//disp(root);
		
	}
}