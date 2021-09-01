#include<bits/stdc++.h>
using namespace std;

void swap(int *x, int *y);

class MinHeap {
    private:
    vector<int> vt;
    public:
    int parent(int i){
        return (i-1)/2;
    }
    int left(int i){
        return (i*2)+1;
    }
    int right(int i){
        return (i*2)+2;
    }
    int getMin()
    {
        return vt[0];
    }
    void print(){
        for(auto f:vt)
        cout<<f<< " ";
    }
    void minHeapify(int b);
    void insert(int a);
    int extractMin();
    void deleteKey(int i);
    void decrementKey(int i,int val);

};

void MinHeap:: insert (int n){
    vt.push_back(n);
    int i=vt.size();
    i=i-1;//for last index 
    while(i!=0 && vt[parent(i)]>vt[i]){
        swap(&vt[i],&vt[parent(i)]);
        i=parent(i);
    }
}
void MinHeap::decrementKey(int i,int val){
    
    if(i>vt.size() -1|| i<0)
    return;

    vt[i]=val;

    while(i!=0 && vt[parent(i)]>vt[i]){
        swap(&vt[parent(i)],&vt[i]);
        i=parent(i);
    }

}

int MinHeap:: extractMin(){

    if(vt.size()<=0){
        return -9999;
    }

    if(vt.size()==1){
        int num =vt[vt.size()-1];
        // vt.pop_back();
        return num;
    }

    int num = vt[0];
    vt[0]=vt[vt.size()-1];
    minHeapify(0);
    // vt.pop_back();
    return num;
}

void MinHeap::deleteKey(int i){
    if(i<0 || i>vt.size()-1)
    return;

    decrementKey(i,-9999);
    extractMin();
}

void MinHeap::minHeapify(int i){
    int l=left(i);
    int r=right(i);
    int smallest=i;
    if(vt[smallest]>vt[l]){
        smallest=l;
    }
    if(vt[smallest]>vt[r]){
        smallest=r;
    }
    if(smallest!=i){
        swap(&vt[smallest],&vt[i]);
        minHeapify(smallest);
    }

}


void swap(int *x,int *y){
    int temp=*x;
     *x=*y;
    *y=temp;
}


int main(){
    MinHeap h;
    h.insert(3);
    h.insert(2);
    h.insert(1);
    h.insert(15);
    h.insert(5);
    h.insert(4);
    h.insert(45);
    h.print();
    cout<<endl;
    // cout<<h.extractMin()<< endl;
    // cout <<h.getMin()<< endl;
    h.decrementKey(2,1);
    // cout <<h.getMin();
    cout<<endl;
    h.print();
    return 0;
    }