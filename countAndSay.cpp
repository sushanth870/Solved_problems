#include<bits/stdc++.h>
#include <string>
using namespace std;

string countAndSay(int A) {
    
    string prev="1";
    string current = "";
    int j=0,count=1;
    cout<<prev[0]<<endl;
    for(int i = 1; i <=A;i++){                                                          //i=1
         j=0,count=1;                                                                //j=1  count=1 prev=1
        while(prev[j]!='\0'){
            if(prev[j]==prev[j+1] && j+1<prev.length()){
                cout<<"came in \n";
                j++;
                count++;
            }
            else{
                current.append(to_string(count) + prev[j]);
                // current.append(to_string(count));
                // current.append(prev[j]);
                cout<<count<<" "<<prev[j]<<endl;
                j++;
                count=1;

            }
        }
        cout<<"current: "<<current<<endl;
        prev=current;
        current="";
    }
    cout<<prev<<endl;
    return prev;
}

int main(){
    string a =countAndSay(5);
    cout<<a<<endl;
    
}