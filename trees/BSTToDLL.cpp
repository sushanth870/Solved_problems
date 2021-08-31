#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node()
    {
        data = 0;
        left = NULL;
        right = NULL;
    }

    node(int dt)
    {
        data = dt;
        left = NULL;
        right = NULL;
    }
    node *insert(node *nd, int num);
    void printInorder(node *nd);
    node *btod(node *root);

};

node *node::insert(node *nd, int num)
{

    if (nd == NULL)
    {
        return new node(num);
    }
    else
    {

        node *root = nd;
        node *prev;
        while (nd)
        {
            if (nd->data < num)
            {
                prev = nd;
                nd = nd->right;
            }
            else
            {
                prev = nd;
                nd = nd->left;
            }
        }
        if (prev->data > num)
        {
            prev->left = new node(num);
        }
        else
        {
            prev->right = new node(num);
        }
        return root;
    }
}

void node::printInorder(node *nd)
{

    if (nd == NULL)

        return;

    printInorder(nd->left);
    cout << nd->data << " ";
    printInorder(nd->right);
}

void preorderHelper(node *root, node *&prev, node *&head)
{
    if (root == NULL)
        return ;

    preorderHelper(root->left, prev, head);
    if(head==NULL){

    head = root;
    prev=root;
    }
    else{
            prev->right=root;
            prev->right->left=prev;
            prev=prev->right;
    }
    preorderHelper(root->right, prev, head);
}

node *node:: btod(node *root)
{
    node *prev;
    node *head = NULL;
    preorderHelper(root, prev, head);
    return head;
} 

int main()
{
    node b;
    node *nd = b.insert(nd, 10);
    b.insert(nd, 4);
    b.insert(nd, 16);
    b.insert(nd, 2);
    b.insert(nd, 6);
    b.insert(nd, 11);
    b.insert(nd, 19);
    b.insert(nd, 17);
    b.insert(nd, 20);
    // b.printInorder(nd);
    node *res =b.btod(nd);

    cout << "\n";
    while(res->right){
         cout<< res->data << " ";
         res=res->right;
    }
}