#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int> &A) {
    int tr=0,i=0;
     if(A[0]==0 && A.size()>1){
         while(A[i]==0){
             i++;
             tr++;
         }
         for(int i =0;i<A.size()-1;i++){
             A[i]=A[i+tr];
         }
         A.resize(A.size()-tr);
     }
     tr=0;
     i=0;
    for(int i=(A.size()-1);i>=0;i--) {
        if(A[i]==9)
        {
            A[i]=0;
            tr=1;
        }
        else{
            A[i]=A[i]+1;
            tr=0;
        }
        if(i==0 && tr==1)
        {
            vector <int>B(A.size()+1);
            B[0]=1;
            
            for(int i =0;i<A.size();i++)
            {
                B[i+1]=A[i];
            }
            return B;
        }
        if(tr==0){
            break;
        }
    }
    return A;
}

int main()
{

    // int arr[] = {10, 16, 7, 14, 5, 3, 12,9};
    // int n = (sizeof(arr) / sizeof(arr[0]));
    // int *ptr;
    vector < int>A;
    

    A.push_back(0);
    A.push_back(0);
    A.push_back(4);
    A.push_back(4);
    A.push_back(6);
    A.push_back(0);
    A.push_back(9);
    A.push_back(5);
    A.push_back(1);




    A = plusOne(A);
    for (int i = 0; i < A.size(); i++)
    {
        cout <<A[i]<<" ";
    }
    return 0;
}