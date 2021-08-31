#include <bits/stdc++.h>
using namespace std;

// bool cmp (vector<int>A, vector<int>B)
// {
//     return A[i]<B[i];
// }
vector<int> nextPer(vector<int> &A) {

    int  n=A.size(),i,j,tr=0;
    for(i=n-1;i>=0;i--)
    { 
        for(j=i-1;j>=0;j--){
                
            if(A[i]>A[j])
            {
                swap(A[i],A[j]);
                tr=1;
                swap(A[n-1],A[j+1]);
                break;
            }
        }
        if(tr==1)
        break;
       
    }
    if(tr==0)
    sort(A.begin(),A.end());
    return A;
}

int main(){
    vector<int> A;
    A.push_back(1);
    A.push_back(2);
    A.push_back(3);
    A.push_back(6);
    A.push_back(5);
    A.push_back(4);
    // A.push_back(20);
    // A.push_back(50);
    // A.push_back(113);

    A=nextPer(A);
    
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] <<" ";
    }

}