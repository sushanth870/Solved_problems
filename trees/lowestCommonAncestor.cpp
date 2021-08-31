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
    node* insert(node *nd,int num);
    void printInorder(node *nd);
};

node* node:: insert(node *nd, int num)
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
    cout << nd->data<<" ";
    printInorder(nd->right);
}

node* LCA(node* nd,int n1,int n2){

   if(nd==NULL)return NULL;
   if(nd->data < n1 && nd->data < n2 && nd->right!=NULL ){
        return LCA(nd->right,n1,n2);
    }
    if(nd->data > n1 && nd->data > n2 && nd->left!=NULL){
        return LCA(nd->left,n1,n2);
    }
    if(nd->data>n1 && nd->data<n2 ||nd->data<n1 && nd->data>n2){
        return nd;
    }
    return nd;


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
    b.printInorder(nd);
    node *res=LCA(nd,20,12);
    cout <<"\n"<< res->data<< endl;
}