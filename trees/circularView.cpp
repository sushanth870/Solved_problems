#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
};

node* newNode(int dt){
    node* nd=new node();
    nd->data=dt;
    nd->left=NULL;
    nd->right=NULL;
    return nd;
}

void bottomviewLevel(int *min,int *max,node *nd,map<int,vector<int>> &m,int vl){

    if(nd==NULL)return;


    m[vl].push_back(nd->data);

    if(vl<*min)*min=vl;
    else if(vl>*max)*max=vl;

    bottomviewLevel(min,max,nd->left,m,vl-1);
    bottomviewLevel(min,max,nd->right,m,vl+1);


}

void printbottomView(map<int,vector<int>> m,int min,int max,set<int> &st){

   
    // for(auto mi=m.begin();mi!=m.end();mi++){
    //     for(auto vi=mi->second.begin();vi!=mi->second.end();vi++){
    //         cout<<*vi<<" ";
    //     }
    //     cout<<"\n";
    // }
    cout<<"inprint\n";

    for(int i=min;i<=max;i++){
        
        if(st.find(m[i][m[i].size()-1])==st.end())
        {   
            cout<<m[i][m[i].size()-1]<<" ";
            st.insert(m[i][m[i].size()-1]);
            cout<<"\n";
        }
    }
}


void bottomViewTeaversal(node* nd,set<int> &st){

    map<int,vector<int>> m;
    int min=0,max=0;

    bottomviewLevel(&min,&max,nd,m,0);
    printbottomView(m,min,max,st);
}

void levelOrderTrav(node *nd,set<int> &st)
{

    queue<node *> q;
    node *currentNode;
    // int ht = height(nd);
    q.push(nd);
    while (!q.empty())
    {
        currentNode = q.front();
        int size = q.size();
        cout << currentNode->data << " ";
        st.insert(currentNode->data);

        while (size--)
        {
            currentNode = q.front();
            if (currentNode->left != NULL)
                q.push(currentNode->left);
            if (currentNode->right != NULL)
                q.push(currentNode->right);
            q.pop();
        }

        
    }
}


void rightView(node *nd,set<int> &st)
{

    queue<node *> q;
    vector<int> vt;
    node *currentNode;
    // int ht = height(nd);
    q.push(nd);
    while (!q.empty())
    {
        currentNode = q.front();
        int size = q.size();
        while (size--)
        {
            currentNode = q.front();
            if (currentNode->left != NULL)
                q.push(currentNode->left);
            if (currentNode->right != NULL)
                q.push(currentNode->right);
            q.pop();
        }
        // cout<<currentNode->data<<" ";
        vt.push_back(currentNode->data);
    }

    vector<int>::iterator it;
    for(it=vt.end()-1; it!=vt.begin()-1;it--){
        if(st.find(*it)==st.end()){
            cout<<*it<<" ";
            st.insert(*it);
        }
    }
}


void circularView(node* nd){
    set<int> st;
    levelOrderTrav(nd,st);
    bottomViewTeaversal(nd,st);
    rightView(nd,st);
}

int main(){
    node* nd=newNode(1);
    nd->left=newNode(2);
    nd->right=newNode(5);
    nd->left->left=newNode(3);
    nd->left->right=newNode(4);
    nd->left->right->left=newNode(8);
    nd->left->right->left->left=newNode(9);
    nd->left->right->left->left->left=newNode(10);
    nd->right->left=newNode(6);
    nd->right->left->left=newNode(7);

    circularView(nd);


    return 0;
}