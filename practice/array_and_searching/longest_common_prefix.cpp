#include <iostream>
#define size 26
using namespace std;

struct Trinode{
	struct Trinode *child[size];
	bool isendword;
};

struct Trinode *getNode(){
	struct Trinode *node = new Trinode;
	node->isendword=false;
	for(int i=0;i<size;i++)
		node->child[i]=NULL;

	return node;
}

void insert(struct Trinode* root, string key){
	struct Trinode *tmp = root;

	for(int i=0;i<key.length(); i++){
		int index = key[i]-'a';
		if(!tmp->child[index])
			tmp->child[index]=getNode();
		tmp=tmp->child[index];
	}
	tmp->isendword=true;
}

int countchild(struct Trinode *root, int *index){
	int count=0;
	for(int i=0;i<size;i++){
		if(root->child[i]!=NULL){
			count++;
			*index=i;
		}
	}
	return count;
} 


void search(struct Trinode *root){
	struct Trinode *tmp = root;
	int index;
	bool flag=false;
	while(countchild(tmp, &index)==1 && tmp->isendword==false){
		tmp = tmp->child[index];
		cout<<(char)('a'+index);
		flag=true;
	}

	if(!flag)
		cout<<"-1";
}

int main(){
	int t,n;
	cin>>t;

	while(t--){
		cin>>n;
		string a[n];

		for(int i=0;i<n;i++)
			cin>>a[i];

		struct Trinode *root = getNode();

		for(int i=0;i<n;i++)
			insert(root, a[i]);

		//for(int i=0;i<n;i++)
		search(root);
		cout<<"\n";
	}
}