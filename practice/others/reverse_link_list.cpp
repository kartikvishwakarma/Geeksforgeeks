#include <iostream>

using namespace std;

typedef struct Node{
	int data;
	struct Node* next;
}node;

node* newnode(int data){
	node* ptr = new node;
	ptr->data = data;
	ptr->next = NULL;

	return ptr;
}


node* insert(node* head, int data){
	if(head==NULL)
		return newnode(data);
	node* tmp = head;

	while(tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = newnode(data);

	return head;
}

node* reverse(node* head){
	if(head == NULL)
		return NULL;

	node *prev, *curr, *Next;

	prev = NULL;
	curr = head;

	while(curr != NULL){
		Next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = Next;
	}
	head = prev;

	return head;

}

void recur_reverse(node** head){
	node* curr, *Next;
	curr = *head;
	Next = curr->next;

	if(curr == NULL)
		return;

	if(Next == NULL)
		return;

	recur_reverse(&Next);
	curr->next->next = curr;
	curr->next = NULL;

	*head = Next;


}

void disp(node* head){
	node* tmp = head;
	while(tmp != NULL){
		cout<<tmp->data<<"->";
		tmp = tmp->next;
	}
	cout<<"NULL\n";
}

int main(){
	int t,n,data;

	cin>>t;
	while(t--){
		cin>>n;
		node* head = NULL;
		cin>>data;
		head = insert(head, data);
		for(int i=1; i<n; i++){
			cin>>data;
			insert(head, data);
		}

		disp(head);
		recur_reverse(&head);
		disp(head);
		head = reverse(head);
		disp(head);
	}
}