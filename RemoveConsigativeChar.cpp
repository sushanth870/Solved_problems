#include<bits/stdc++.h>
#include <string>
using namespace std;

string RCC(string A,int B) {

    //    for(int i=0; i<A.length(); i++)
    //    {
    //        if(i+B>A.length()){
    //         //    cout<<"if1: "<<i<<endl;
    //            for(int j=i; j<A.length(); j++){
    //             //    cout<<"j is: "<<j<<"A[j]: "<<A[j]<<endl;
    //                res.push_back(A[j]);
    //            }
    //            return res;
    //        }
    //        if(A[i] != A[i+B-1]){
    //         //    cout<<"if2";
    //            for(int l=i;l<=(i+B-1);l++){
    //                res.push_back(A[l]);
    //            }
    //            i=(i+B-1);
    //        }
    //        else if(A[i] == A[i+B-1]){
    //         //    cout<<"if3"<<endl;
    //            if(A[i] == A[i+B]){
    //                int l;
    //                for( l=i;l<=(i+B);l++){
    //                 //    cout<<"l is: "<<l<<"A[l]: "<<A[l]<<endl;
    //                    res.push_back(A[l]);
    //                }
    //                i=l;
    //            }
    //            else{
    //             //    cout<<"if4";
    //                     int j=i;
    //                     int k=1;
    //                     while((A[j]==A[i+B-k] && (j<(i+B-k)))){
    //                         j++;
    //                         k++;
    //                         }
    //                     if(j<(i+B-k)){
    //                         for(int l=0;l<B;l++){
    //                             res.push_back(A[i+l]);
    //                         }
    //                         i=i+B;
    //                     }    
    //                     else{
    //                         // cout<<"i+B: "<<i+B<<endl;
    //                         i=i+B-1;
    //                     //  cout<<"i: "<<i<<endl;

    //                     }
    //                     }
    //            }
    //        }
    string res="";
    int i=0;
    char temp;
    while (i+B<A.length()){
        // cout<<"c0"<<endl;
        if(A[i]!=A[i+B-1]){
            // cout<<"c1"<<endl;
            temp=A[i];
            while(i<A.length() && A[i]==temp ){
                // cout<<"c2"<<endl;
                res.push_back(A[i]);
                i++;
            }
        }
        else{
            if(A[i]==A[i+B]){
                // cout<<"c3"<<endl;
               
                    //  cout<<"c4"<<endl;
                    temp=A[i];
                    while(i<A.length() && A[i]==temp ){
                        // cout<<"c5"<<endl;
                        res.push_back(A[i]);
                        i++;
                    }
                }
                else{
                    // cout<<"c6"<<endl;
                    i=i+B;
                }
            
        }
    }

    if(i<A.length() && A[i]!=A[i+B-1]){
        while(i<A.length()){
            res.push_back(A[i]);
            i++;
        }
    }
    
    
       return res;
}




int main(){
    string c="bcddaaaa";
    string a = RCC(c,3);
    cout<<a<<endl;
    
}