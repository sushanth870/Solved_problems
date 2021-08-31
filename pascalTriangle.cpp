#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n;
    cout << "enter row:";
    cin >> n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++){
            cout <<" ";
        }
        int val = 1;  
        for(int k=0;k<=i;k++)
        {
          cout <<" "<<val;
          val = val*(i-k)/(k+1);
        }
        cout <<"\n";
    }
}