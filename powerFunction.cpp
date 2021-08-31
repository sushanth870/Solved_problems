#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> &A, int l, int r, int x);
#include <iostream>
#include <vector>
using namespace std;
int recursive(int x,int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return x; 
    }
    //  cout <<"in the recursive at:"<<n<<endl;
    if(n==2){
        return x*x;
    }
    else {
        int y=recursive(x,n/2);
        cout <<"this is y:"<<y<<endl;
        return y*y;
    }
}
int power(int x,int n,int d)
{
    if(n==0){
        return 1%d;
    }
    if(n==1){
        return (x+d)%d; 
    }
    if(n> 0)
    {
        if(n%2 == 0){
            if(x>0){
                cout << "l1"<<endl;
            int g=recursive(x,n);
            cout<<g<<endl;
            return g%d;
            }
            if(x<0){
                cout << "l2"<<endl;
            int g=recursive(x,n);
            cout<<g<<endl;
            return (g+d)%d;
            }

            
        }
        else if(n%2 != 0){
           
            if(x>0){
                cout << "l3 "<<" "<<x<<" "<<n<<endl;

            int g=recursive(x,n-1)*x;
            cout<<g<<endl;
            return g%d;
            }
            if(x<0){
                cout << "l4"<<endl;
            int g=recursive(x,n-1)*x;
            cout<<g<<endl;
            return (g+d)%d;
            }
        }
    }
    
   }
int main()
{
   int c=power(213,231,20);
//    int c= -22%20;
   cout<<c<<endl;
   return 0;

}
