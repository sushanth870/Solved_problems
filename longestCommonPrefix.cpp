#include <bits/stdc++.h>
#include <vector>
using namespace std;

string LCP(vector<string> &A){
    //  string res="";
    //  int i=0;
    //  if(A.size()==1)return A[0];
    //  if(A[0][i]!=A[1][i]) return res;
    //  while(A[0][i]==A[1][i]){
    //      res.push_back(A[0][i]);
    //      if(i==5)break;
    //      i++;
    //  }
    //  if(A.size()>2){
    // for(int i=2;i<A.size();i++){
    //     int j=0;
    //     if(res.size()==0)break;
    //     while(j<res.size() && j< A[i].size()){
    //         if(res[0]!=A[i][0])return "";
    //         if(res[j]==A[i][j]){
    //                 j++;
    //         } 
    //         else{
    //             res[j]='\0';
    //             break;
    //         }
    //     }
        
    // }
    //  }
    //     return res; 
    string res="";
    sort(A.begin(), A.end());
    // for(int i=0;i<A.size();i++){
    //     cout<<A[i]<<endl;
    // }
    string a=A[0];
    string b=A[A.size()-1];
    int n;
     if(a.length()>b.length()){
         n=b.length();
     }
     else {n=a.length();}
     int i=0;
     while(i<n && A[0][i]==A[A.size()-1][i]){
         res+=A[0][i];
        i++;
     }

return res;

}
int main()
{
    vector<string> A;
    A.push_back("abcdknnlno");
    A.push_back("abcdejvlkjs");
    A.push_back("abefgh");

    string c = LCP(A);
    cout<<c;
    return 0;


}
