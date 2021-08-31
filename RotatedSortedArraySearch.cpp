#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> &A, int l, int r, int x);

int rotate(vector<int> &A,int B)
{

    int i=0,j=A.size()-1,mid=0,res=-1;
    if(A[i]>A[j]){
        // cout<<"ch1"<<endl;
        while (i<j) 
        {
            // cout<<"ch2"<<endl;
            if(A[i]==B){
                return i;
                break;
            }
            if(A[j]==B){
                return j;
                break;
            }
            mid=(i+j)/2;
            // cout<<"mid in w:"<<mid<<endl;
            if( (A[mid-1]>A[mid]) && (A[mid]<A[mid+1])){
                        // cout<<"ch3"<<endl;
                break;

            }
            if(A[mid]<A[j]){
                j=mid-1;
                // cout<<"ch4"<<endl;
            }
            else if(A[mid]>A[j]){
                i=mid+1;
                // cout<<"ch5"<<endl;
            }
            if(i==j){
                mid=i;
                break;
            }
        }
        
    }
    // cout<<"this is mid :"<<mid<<endl;
    if(B==A[mid]){
        return mid;
    }
    if((B>=A[mid]) && (B<=A[A.size()-1])){
        // cout<<"ch6"<<endl;
        i=mid;
        j=A.size();
    }
    else if(A[mid-1]>=B && B>=A[0]){
        // cout<<"ch7"<<endl;
        i=0;
        j=mid;
    }
    // while (i<j) 
    //     {
            // cout<<"ch8"<<endl;
    //         mid=(i+j)/2;
    //         if(A[i]==B){
    //             res=i;
    //             break;
    //         }
    //         if(A[j]==B){
    //             res=j;
    //             break;
    //         }
    //         if(A[mid]==B){
    //             res=mid;
    //             break;
    //         }
    //         if(A[mid]<B){
                // cout<<"ch9"<<endl;
    //             i=mid+1;
    //         }
    //         if(A[mid]>B){
                // cout<<"ch10"<<endl;
    //             j=mid-1;
    //         }
    //     }
    //    cout<<" "<<i<<" "<<j<<endl;
        return binarySearch(A,i,j,B);
;


    
}
int binarySearch(vector<int> &A, int l, int r, int x)
{
	if (r >= l) {
		 if(A[l]== x){
                return l;
            }
            if(A[r]== x){
               return r;
            }
        int mid = l + (r - l) / 2;
        // cout<<l<<r<<x<<endl;

		// If the element is present at the middle
		// itself
       
		if (A[mid] == x)
			return mid;

		// If element is smaller than mid, then
		// it can only be present in left subAay
		if (A[mid] > x)
			return binarySearch(A, l, mid - 1, x);

		// Else the element can only be present
		// in right subAay
		return binarySearch(A, mid + 1, r, x);
	}

	// We reach here when element is not
	// present in array
	return -1;
}
int main()
{
    vector<int> V;
    V.push_back(24);
    V.push_back(25);
    V.push_back(26);
    V.push_back(37);
    V.push_back(48);
    V.push_back(0);
    V.push_back(5);
    V.push_back(11);
    V.push_back(13);
    V.push_back(15);
    V.push_back(16);
    V.push_back(17);
    V.push_back(18);
    V.push_back(19);


    int c=rotate(V,5);
    // cout<<c<<endl;

   

}
