#include <bits/stdc++.h>
using namespace std;

int LSC(vector<int> &A) {
    int sum=0,hisum=0,start,end;
    for (int i = 0; i <A.size(); i++) {
        start =i;
        sum=0;
        
        for (int j = i; j <A.size();j++){
            
            sum=sum +A[j];
            if(sum>hisum){
                hisum=sum;
                end=j;
                
            }
        }
    }
    return hisum;
}

int main()
{

    // int arr[] = {10, 16, 7, 14, 5, 3, 12,9};
    // int n = (sizeof(arr) / sizeof(arr[0]));
    // int *ptr;
    vector < int>A;
    

    A.push_back(-2);
    A.push_back(1);
    A.push_back(-3);
    A.push_back(4);
    A.push_back(-1);
    A.push_back(2); 
    A.push_back(1);
    A.push_back(-5);
    A.push_back(4);

    int hival = LSC(A);
    cout << hival <<endl;
    // for (int i = 0; i < A.size(); i++)
    // {
    //     cout <<A[i]<<" ";
    // }
    return 0;
}