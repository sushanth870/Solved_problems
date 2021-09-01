#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Graph{
    private:
    map<T,list<T>> adj;
    int v;
    public:
    Graph(int n){
        v=n;
    }
    void add_edge(T n1,T n2,bool bidi=true){
        adj[n1].push_back(n2);
        if(bidi){
            adj[n2].push_back(n1);
        }
    }
    void print(){
        for(auto m:adj){
            cout<<m.first<<"-->"<<endl;
            for(auto l:m.second){
                cout<<l<<" ";
            }
        }
    }

    void DfsHelper(int n,unordered_map<int,bool> &visited){

        visited[n] = true;
        for(auto pairs: this->adj[n]){
            if(!visited[pairs]){
                DfsHelper(pairs,visited);
            }
        }


    }
    int DFS(){
        int result=0;
        unordered_map<int,bool> visited;
        for(int i=0;i<v;i++){
            if(!visited[i]){
                DfsHelper(i,visited);
                result++;
            }
        }
        return result;
    }
    int connectedComponents(){

        return DFS();
    }

};
int main(){
    Graph<int> g(6);
    g.add_edge(0,1);
    g.add_edge(2,1);
    g.add_edge(3,2);
    g.add_edge(4,5);
    cout<<g.connectedComponents();
    return 0;
}