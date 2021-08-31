#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    int V=1e5+10;
    cin >> n;
    int a[n];
    int freq[V];
    for(int i = 0; i <n;i++){
        cin>>a[i];
        freq[a[i]] = freq[a[i]]+1;
    }
    cin >> q;
    int ele;
    for(int i = 0; i <q;i++){
        cin >> ele;
        cout<<freq[ele]<<endl;
    }

    

}