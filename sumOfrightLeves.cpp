// C++ program for different tree traversals
#include <iostream>
using namespace std;
void rightSum (struct Node *root,int* sum);
void temp(struct Node *root);
/* A binary tree node has data, pointer to left child
and a pointer to right child */
struct Node {
	int data;
	struct Node *left, *right;
	Node(int data)
	{
		this->data = data;
		left = right = NULL;
	}
};

/* Given a binary tree, print its nodes according to the
"bottom-up" postorder traversal. */

/* Given a binary tree, print its nodes in preorder*/
void temp(struct Node *root){
    int sum=0;
    rightSum(root, &sum);
    cout<<sum<<endl;
}
void rightSum (struct Node *root,int* sum)
{
    if(root==NULL) return;
    if(root->right!=NULL) 
    { 
        if(root->right->left==NULL && root->right->right==NULL)
        *sum=*sum+root->right->data;
    }
        
    rightSum(root->right,sum);
    rightSum(root->left,sum);
    
    
    



}
void printPreorder(struct Node* node)
{
	if (node == NULL)
		return;

	/* first print data of node */
	cout << node->data << " ";

	/* then recur on left sutree */
	printPreorder(node->left);

	/* now recur on right subtree */
	printPreorder(node->right);
}

/* Driver program to test above functions*/
int main()
{
	struct Node* root = new Node(0);
	root->left = new Node(4);
	root->right = new Node(2);
	root->right->left = new Node(1);
	root->right->right = new Node(7);
    root->right->left->left = new Node(6);
	root->right->left->right = new Node(3);

    temp(root);
	// cout << "\nPreorder traversal of binary tree is \n";
	// printPreorder(root);

	return 0;
}
