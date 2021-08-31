#include<bits/stdc++.h>
using namespace std;
bool isprime (int A)
{
    if (A <= 1)
        return false;
 
    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(A); i++)
    {
            cout <<"A is:"<<A<<" i is :"<<i;
        if (A % i == 0)
        {
            cout <<"in\n";
            return false;
        } 
    }
        
    return true;
}
int main(){
    int A=37;
    cout<<"\n"<<isprime(A);
}