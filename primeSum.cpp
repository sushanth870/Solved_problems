#include<bits/stdc++.h>
using namespace std;
vector<int> primeSum(int A);
vector<int> primeSum(int A){
     vector<int> ptr;
    
    ptr.push_back(2);
    ptr.push_back(3);

    // Check from 2 to square root of n
    for (int i=2; i<A; i++){
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0) 
                break;
            else if (j+1 > sqrt(i)) {
                ptr.push_back(i);

            }

        }  
        } 

     
int temp;
vector<int> res;
    for (int i = 0; i < ptr.size(); i++){
        temp=A-ptr[i];
            if (find(ptr.begin(), ptr.end(), temp) != ptr.end()) {
            res.push_back(ptr[i]);
            res.push_back(temp);
            break;
        }
        
    }
    
    return res;

}

int main()
{
    int A=16777214;
    vector<int> N;
    N=primeSum(A);
    for (int i =0 ;i<N.size();i++){
        cout<<N[i]<<" ";
    }

}