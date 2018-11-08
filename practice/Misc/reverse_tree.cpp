#include <iostream>
#include <queue>
#include <utility>
#include <tuple>

using namespace std;

typedef struct Node{
	char data;
	struct Node *left, *right;
}node;

node* newnode(char data){
	node* ptr = new node;
	ptr->data = data;
	ptr->left=NULL;
	ptr->right=NULL;

	return ptr;
}

node* insert(node* root, char data){
	if(root==NULL)
		return newnode(data);

	if(root->data>data)
		root->left = insert(root->left, data);
	else
		root->right = insert(root->right, data);

	return root;
}


void disp(node* root){
	if(root!= NULL){
		//cout<<root->data<<" ";
		
		disp(root->left);
		cout<<root->data<<" ";
		disp(root->right);
		//rev = newnode(root->data);
	}
}


void level_wise_travese(node* root){
	queue<node * > Q;
	Q.push(root);
	node *tmp;

	while(!Q.empty()){
		tmp = Q.front();
		//tie(tmp,child) = Q.front();
		cout<<tmp->data<<" ";
		Q.pop();
		if(tmp->left != NULL)
			Q.push(tmp->left);
		if(tmp->right != NULL)
			Q.push(tmp->right);

	}
	cout<<"\n";
}

void reverse(node* root){
	if(root != NULL){
		node* tmp = root->left;
		root->left = root->right;
		root->right = tmp;
	}
}


int main(){
	int n;
	char data;
	cin>>n;

	node* root = NULL;
	cin>>data;
	root =  newnode('a');
	root->left = newnode('b');
	root->right = newnode('c');
	root->left->left = newnode('d');
	root->left->right = newnode('e');
	root->right->left = newnode('f');

	//level_wise_travese(root);
	disp(root);
	cout<<"\n";
	reverse(root);
	disp(root);
	cout<<"\n";
}