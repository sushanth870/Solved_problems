#include <bits/stdc++.h>
using namespace std;


int strstr(string A,string B){
    int lenA= A.length();
    int lenB= B.length();
    // cout<<lenA<<" "<<lenB<<endl;
    for(int i=0;i<lenA-lenB;i++){
        int j;
        for( j=0;j<lenB;j++){
            if(A[i+j]!=B[j]){
                break;
            }            
        }
        if(j==lenB){
                return i; 
            }
    }
    return -1;
}

int main(){
    string A,B;
    cin >> A >> B;

    int c = strstr(A,B);
    cout <<c;
}