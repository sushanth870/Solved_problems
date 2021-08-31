#include<bits/stdc++.h>
using namespace std;

class Dnode{
    public:
    int data;
    Dnode *left;
    Dnode *right;

    Dnode(){
        data = 0;
        left=right=NULL;
    }

    Dnode(int dt){
        data = dt;
        left=right=NULL;
    }
    Dnode* insert(Dnode *dnd,int dt);
    void PrintDLL(Dnode* dnd);

};


Dnode* Dnode:: insert(Dnode *dnd,int dt){

    if(dnd==NULL){
        return new Dnode(dt);
    }
    else{

        Dnode *root=dnd;
        Dnode *prev;
        while(dnd){
            prev = dnd;
            dnd=dnd->right;
        }
        prev->right=new Dnode(dt);
        prev->right->left=prev;

    return root;
    }
    // Dnode *temp = new Dnode(dt);
}

void Dnode::PrintDLL(Dnode* dnd){
    if(!dnd)return;

    while (dnd)
    {
        cout<<dnd->data<<" ";
        dnd=dnd->right;
    }

    return;
    
}

int main(){

 

    Dnode b;
    Dnode *temp=NULL;
    temp=b.insert(temp,10);;
    b.insert(temp,20);
    b.insert(temp,30);
    b.insert(temp,40);
    b.insert(temp,50);
    b.insert(temp,60);
    b.PrintDLL(temp);
    Dnode *temp2;
    // cout<<"\n";
    temp2=temp;
    while (temp2->right){
        cout<<temp2->data<<" ";
        temp2=temp2->right;
    }
    cout<<"left\n";
    while (temp2){
        cout<<temp2->data<<" ";
        temp2=temp2->left;
    }




}