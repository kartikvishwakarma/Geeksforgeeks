
//Initial Template for C++
#include <iostream>
using namespace std;
struct Node
{
    long long data;
    Node *next;
};
Node * newNode(int key)
{
    Node *temp=new Node;
    temp->data=key;
    temp->next=NULL;
    return temp;
}
Node *insertNode(Node *head,int key)
{
    if(head==NULL)
    head=newNode(key);
    else
    head->next=insertNode(head->next,key);
    return head;
}
void traverse(Node *head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
 void KSum(Node *head, int k);
//Position this line where user code will be pasted.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        Node *head=NULL;
        int n,k;
        cin>>n>>k;
        while(n--)
        {
            int x;
            cin>>x;
            head=insertNode(head,x);
        }
       // traverse(head);
       KSum(head,k);
       traverse(head);
    }
    return 0;
}


void KSum(Node *head, int k)
    {
    	/*
        Node* tmp1,  *prev;
        Node** ptr;
        Node* tmp=NULL;
        tmp1 = head;
       while(tmp1!=NULL){
       		cout<<"outer loop\n";
           int sum=0;
           int p=k;
            while(tmp1!=NULL && p){
            	cout<<"inner loop\n";
                sum+=tmp1->data;
                p--;
                //prev = tmp1;
                tmp1=tmp1->next;
            }
            head = insertNode(head, sum);
            //traverse(tmp);

       }
       	ptr = &tmp;
       	head = *ptr;
    	traverse(head);
    	*/

    	Node *ptr1, *ptr2;
    	ptr1=head->next; ptr2=head;
    	//ptr2->next = NULL;
    	while(ptr1){
    		int p=k;
    		cout<<"outer..\n";
    		while(ptr1 && p-1){
    			cout<<"inside..\n";
    			ptr2->data+=ptr1->data;
    			ptr1=ptr1->next;
    			p--;
    		}
    		Node* var = head;

    		while(var->next)
    			var=var->next;
    		var->next = ptr1;
    		
    	}
    	traverse(head);
    }