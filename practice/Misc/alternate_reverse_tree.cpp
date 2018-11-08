
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* newNode(int data)
{
    struct Node* Node = (struct Node*)
                        malloc(sizeof(struct Node));
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;
    return(Node);
}
// The main function to reverse alternate Nodes of a binary tree
void reverseAlternate(struct Node *root);
// A utility function to print indorder traversal of a
// binary tree
void printInorder(struct Node *root)
{
    if (root == NULL) return;
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}
/* Driver program to test above functions*/
int main()
{
   int t;
  scanf("%d", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d",&n);
     Node *root = NULL;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
      //  cout << n1 << " " << n2 << " " << (char)lr << endl;
        if (m.find(n1) == m.end())
        {
           parent = newNode(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];
        Node *child = newNode(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
   reverseAlternate(root);
   printInorder(root);
   cout<<endl;
  }
    return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; 
void traverse(Node* root, int depth){
    if(root != NULL){
        if(depth%2){
            int left_data=-1;
            int right_data=-1; 
            if(root->left != NULL)
                left_data = root->left->data;
            if(root->right != NULL)
                right_data = root->right->data;
                
            Node* tmp = root->left;
            if(right_data != -1)
                root->left->data = right_data;
            else
                root->left = root->right;
            if(left_data != -1)
                root->right->data = left_data;
            else
                root->right = tmp;
        }
        traverse(root->left, depth+1);
        traverse(root->right, depth+1);
    }
}
*/

/*
void reverseAlternate(Node *root)
{
    queue<Node*> node, next;
    stack<int> s;
    queue<int> q;

    int p=0;

    node.push(root);
    //s.push(root->data);

    Node* tmp;

    while(!node.empty()){
      //cout<<"pop element..\n";
      tmp = node.front();
      node.pop();
      if(tmp->left && tmp->right){
        next.push(tmp->left);
        next.push(tmp->right);

        if(p%2==0){
          s.push(tmp->left->data); 
          s.push(tmp->right->data);
        }
      }
        
      if(p%2==1){
          tmp->data = s.top();
          s.pop();
        }
      

      if(node.empty()){
        while(!next.empty()){
          node.push(next.front());
          next.pop();
        }
        p++;
      }
    }
}
*/

void preorder(Node* node1, Node* node2, int level){
  if(node1!= NULL && node2!=NULL){
    if(level%2){
      swap(node2->data, node1->data);
    }
      preorder(node1->left, node2->right,level+1);
      preorder(node1->right, node2->left,level+1);
  }
}

void reverseAlternate(Node *root){
  preorder(root->left, root->right,1);
}