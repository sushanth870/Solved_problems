#include <iostream>
#include <vector>
using namespace std;

int vac(string A){
    // int i,j,count=0;
    // for(i=0;A[i]!='\0';i++){
    //     for(j=i;A[j]!='\0';j++)
    //     {
    //         if(A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u')
    //         {
    //             if(A[j]!='a' && A[j]!='e' && A[j]!='i' && A[j]!='o' && A[j]!='u'){
    //             cout<<"start1: "<<A[i]<<" end: "<<A[j]<<endl;
    //             count++;
    //             }
    //         }
    //         else{
    //              if(A[j]=='a'||A[j]=='e'||A[j]=='i'||A[j]=='o'||A[j]=='u'){
    //             cout<<"start2: "<<A[i]<<" end: "<<A[j]<<endl;
    //             count++;
    //              }
    //         }
    //     }
    // }
    //     return count;
    // for(int i=0;A[i]!='\0';i++){
    //     cout<<A[i]<<endl;
    //     if(A[i]!='c'){
    //         cout<<"In"<<endl;
    //     }
    // }  
     int c=0,v=0,count=0;
    for(int i=0;A[i]!='\0';i++){
        
            if(A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u')
            {
                c++;      
            }
            else{
                 v++;
            }
           
        
    }
     count=(c*v)%10000000007;
        return count;
  
}
int main()
{
 
    string A="inttnikjmjbemrberk";
    int c = vac(A);
    cout<<c;


}
