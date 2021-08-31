#include <bits/stdc++.h>
using namespace std;

// bool cmp (vector<int>A, vector<int>B)
// {
//     return A[i]<B[i];
// }
int main(){
    vector<int> A;
    A.push_back(3);
    A.push_back(30);
    A.push_back(34);
    A.push_back(5);
    A.push_back(9);

    sort(A.begin(), A.end(),greater<int>());
    for (int i = 0; i < A.size(); i++)
    {
        cout <<A[i]<<" ";
    }

}