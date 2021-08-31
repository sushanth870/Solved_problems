#include <bits/stdc++.h>
using namespace std;

double medianOfArray(vector<int> &A,vector<int> &B)
{
    
    int k=0,i=0,j=0;
    vector<int> C;
    while(i<A.size() && j<B.size()){
        if(A[i]<B[j]){
            C.push_back(A[i]);
            i++;            
        }
        if(A[i]>B[j]){
            C.push_back(B[j]);
            j++;
        }
        else if(A[i]==B[j]){
            C.push_back(A[i]);
            C.push_back(B[j]);
            i++;
            j++;
        }
    }
    while(i<A.size()){
        C.push_back(A[i]);
            i++;
    }
     while(j<B.size()){
        C.push_back(B[j]);
            j++;
    }
    if(C.size() % 2 !=0){
        
        return (double)C[(C.size()-1)/2];
    }
    else{
        
        return (double)(C[(C.size()-1)/2]+C[((C.size()-1)/2)+1])/2;
    }

}

int main()
{
    vector<int> A;
    vector<int> B;
    A.push_back(-16);
    A.push_back(-11);
    A.push_back(17);
    A.push_back(22);
    A.push_back(23);
    A.push_back(35);
    A.push_back(36);
    
    B.push_back(-40);
    B.push_back(-36);
    B.push_back(-10);
    B.push_back(3); 
    B.push_back(16);
    B.push_back(26);
    B.push_back(33);
    B.push_back(35);
    B.push_back(50);


    double ans;
    ans=medianOfArray(A,B);
    cout<<endl<<ans;
    
}
