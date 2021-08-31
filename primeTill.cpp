#include <bits/stdc++.h>
using namespace std;
vector<int> isprime(int A)
{
    vector<int> ptr;
    int count = 2;
    int index = 0;

    // Check from 2 to square root of n
    for (int i = 2; i <= A; i++)
    {
        
        // Check from 2 to n-1
        for (int j = 2; j < i; j++)
            if (i % j == 0){

                continue;
            }
        else{
            ptr.push_back(i);
        }
    }

    return ptr;
}
int main()
{
    int A = 7;
    vector<int> a;
    a = isprime(A);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}