 #include<bits/stdc++.h>
 using namespace std;


template<typename T>
class Graph{
    public:
    unordered_map<T,list<T>> adj;
    Graph(){

    }
    void add_edge(T n1,T n2,bool bidi=true){
        adj[n1].push_back(n2);
        if(bidi){
            adj[n2].push_back(n1);
        }
    }
    void print(){
        for(auto m:this->adj){
            cout << m.first<<"--> ";
            for(auto l:m.second){
                cout << l<<" ";
            }
            cout << endl;
        }
    }
};
 int main(){
     Graph<int> g;
     g.add_edge(1,2);
     g.add_edge(3,2);
     g.add_edge(4,2);
     g.add_edge(1,4);
     g.add_edge(1,3);
     g.print();


 }