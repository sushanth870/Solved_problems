#include<bits/stdc++.h>
using namespace std;
vector<string> FuzzBuzz (int A)
{
    vector<string> result;
    for (int i = 0; i <A;i++)
    {
        if((i%3==0)&&(i%5==0))
        {
            result.push_back("FizzBuzz");
        }
        else{
            if(i%3==0){
                result.push_back("Fizz");
            }
            else if(i%5==0){
                result.push_back("Buzz");
            }
            else{
                result.push_back(to_string(i));
            }
        }
    }
    return result;
}
int main(){
    int A=5;
    cout<<"\n"<<FuzzBuzz(A);
}