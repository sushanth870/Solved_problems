#include<bits/stdc++.h>
using namespace std;



int main(){
    
    int N=1e5+10;
    long long fact[N];
    fact[0]=fact[1]=1;
    for(int i=2;i<N;i++){
        fact[i]=fact[i-1]*i;
    }
//pre-computing

    int n;
    cin >> n;
    while(n--){
        int num;
        cin >> num;
        cout<<fact[num]<<endl;
    }
}