#include<bits/stdc++.h>
using namespace std;
string NextSimilarNumber(string A){
    // int i,tr=0,j;
    // for(i=0;i<(a.length()-1);i++)
    // {
    //     if(a[i]>a[i+1])
    //     {
    //         tr=1;
    //     }
    //     else{
    //         tr=0;
    //         break;
    //     }
    // }
    // if(tr==1)
    // return "-1";

    // for(i=0;i<(a.length()-1);i++){
    //      if(a[i+1]=='0')
    //      { 
    //         continue;
    //      }
    //       else {if((a[i]>a[i+1])){
    //        break; 
    //     }}
    // }
    
    // for( j=i;j<(a.length());j++)
    // {
    //     if(a[j]<a[j+1]){
    //         break;
    //     }
    // }
    // vector<int> b;
    // for(i=j+1;i<(a.length());i++)
    // {
    //     b.push_back(a[i]);
    // }
    // sort(b.begin(),b.end());
    
    // for(i=j+1;i<(a.length());i++)
    // {
    //     a[i]=b[i-j-1];
    // }
    // swap(a[j],a[j+1]);

    // return a;
    int n;
string s=A;
sort(s.begin(),s.end());
cout<<s<<endl;
cout<<A<<endl;
if(s==A)
{
cout<<"in"<<endl;
return "-1";
}
n=A.size();
int  i;
int k;
for(i=n-1;i>0;i--)
{
    if(A[i]>A[i-1])
    {
        k=i-1;
        break;
    }
}
if(i==0)
{
    return "-1";
}
int x=A[k];
int mi=i;
int j;
for(j=i+1;j<n;j++)
{
    if(A[j]>x && A[j]<A[mi])
    {
        mi=j;
    }
}
swap(A[mi],A[k]);
sort(A.begin()+i,A.end());

return A;
}

int main()
{
    string a="208671";
    a=NextSimilarNumber(a);
    cout<<a;
}