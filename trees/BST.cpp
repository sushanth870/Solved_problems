#include <bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node *left;
    node *right;

    node(){
         data=0; left=right=NULL;
         }
    node(int dt)
    {
        data = dt;
        left = right = NULL;
    }
    node* insert(node *nd, int num);
    void  printInorder(node* nd);


};

// node *newNode(int dt)
// {
//     node *nd = new node();
//     nd->data = dt;
//     nd->left = NULL;
//     nd->right = NULL;
//     return (nd);
// }  


node* node:: insert(node *nd, int num)
{
    cout << "insert"<<endl;

    if (nd==NULL)
    {
         
        return new node(num);
    }
    else
    {
        node *root=nd;
        node *prev;
        while (nd)
        {
            cout<<"in"<<endl;
            cout<<nd->data<<endl;
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
    

void node:: printInorder( node* nd)
{
    if (nd == NULL)
        return;
 
    /* first recur on left child */
    printInorder(nd->left);
 
    /* then print the data of nd */
    cout << nd->data << " ";
 
    /* now recur on right child */
    printInorder(nd->right);
}

    int main() 
    {   
        node b;
        node *nd =b.insert(nd, 10) ;
        b.insert(nd, 4);
        b.insert(nd, 16);
        b.insert(nd, 2);
        b.insert(nd, 6);
        b.insert(nd, 11);
        b.insert(nd, 19);
        b.insert(nd, 17);
        b.insert(nd, 20);
        // cout << nd->data << " \n";
        b.printInorder(nd);
    }