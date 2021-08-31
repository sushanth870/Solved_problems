#include<bits/stdc++.h>
#include <string> 
using namespace std;
string isprime (int A)
{
    int i,store;
    vector<string> s;
    string a="";
    while(A!=0){
        // cout << A;
        i =A%2;
        store=A/2;
    // stringstream ss;
    // ss << i;
    // string str = ss.str();
    //     a=a+str;
    char c=(char)i;
    s.push_back(c);
        cout<<i;
        A=store;
    }
    s.reserve();
    std::stringstream ss;
    for(std::vector<std::string>::const_iterator itr = s.begin();
      itr != s.end();
      ++itr) {
    ss << *itr;
  }

  return ss.str();
   

}
int main(){
    int A=6;
    cout<<"\n"<<isprime(A);
}