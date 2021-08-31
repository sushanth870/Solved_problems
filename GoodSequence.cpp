#include<bits/stdc++.h>
using namespace std;
int goodseq(vector<int> a){
    map<int, int>m;
    for(int i=0;i<a.size();i++){
        m[a[i]]=m[a[i]]+1;
    }
int cnt=0;
for(auto p:m){
    if(p.first!=p.second){
        if(p.first<p.second){
            cnt=cnt + (p.second-p.first);
        }
        else{
            cnt=cnt + p.second;
        }
    }
}
    


return cnt;


}

int main(){
    vector<int> v{2,7,1,8,2,8,1,8};

    int ans=goodseq(v);

    cout << ans << endl;



}