#include<bits/stdc++.h>
using namespace std;

void printMap(unordered_map<string,int> m) {
    cout<<m.size()<<endl;
    unordered_map<string, int> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
}

int findFrequency(vector<int> v, int x){
    // Your code here
    map<int,int> m;
    
    for(int i=0;i<v.size();i++){
        m[v[i]]=m[v[i]]+1;
    }
    
    return m[x];
}

int main(){
    int n;
    cin>>n;
    // unordered_map <string , int> m;
    // while (n--) 
    // {
    //     string s;
    //     cin>>s;
    //     m[s] =m[s]+1;
    // }
    // vector<int> v;
    
    // for(int i=0;i<n;i++){
    //     int k;
    //     cin>>k;
    //     v.push_back(k);
    // }
    // int x=1;
    //  cout<<findFrequency(v,x);
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }   
    printMap(m) ;
    // m.clear() ;
    // cout<<m.find("abc");
    m.erase(m.find("abc"));
    printMap(m) ;
    auto c=m.find("abc");
    cout<<c<<endl;
    
}