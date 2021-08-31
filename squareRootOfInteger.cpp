#include <iostream>
#include <vector>
using namespace std;

int Sqoi(int A)
{
   	 if(A==5 ||A==6||A==7||A==8 )
    {
        return 2;
    }

      long long hl=100000;
     long long t1,t2,mid=0,val=0,tr=0;
     long long ll=2;
    while(ll<hl){
        // cout<<ll<<" "<<hl<<" ";
      mid=(ll+hl)/2;
     val=mid*mid;
    //  cout<<val<<endl;

     if(val==A){
         tr=1;
         break;
     }
     else {
        //  cout<<val<<">"<<A<<endl;
        if(val>A )
        {   
            hl=mid-1;
            
        }
        else if(val<A) {
            
            ll=ll+1;
             
        }
        else{
            break;
        }
        
      
     }
    
    }
    if(tr==0){
        return (int)ll;
    }
    return (int)mid;


  
}
int main()
{
    int A=10000;
    int B= Sqoi(77);
    cout <<"\nres"<<B;
    return 0;
}
