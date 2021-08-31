#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;

string isBalance(string s){
unordered_map<char,int> symbols ={{'[',-1},{'(',-2},{'{',-3},{']',1},{')',2},{'}',3}};
    stack<char> st;
    
    for(char i:s){
        if(symbols[i]<0){
            st.push(i);
        }
        else{
            if(st.empty()){
                return "NO";
            }
            char top = st.top();
            st.pop();
            if(symbols[top]+symbols[i]!=0){
                return "No";
            }
        }
        // i++;
    }

    if(st.empty()) return "YES";
    else return "NO";
}



int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<isBalance(s)<<endl;
    }
}