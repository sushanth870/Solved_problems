#include <bits/stdc++.h>
using namespace std;

int woodCutting(vector<int> &V, int B //need)
{
    // vector<int> A = V;
    // sort(A.begin(), A.end(), greater<int>());
    // int i,j, val = 0;
 
    // for ( i = 1; i < A.size(); i++)
    // {
    //     for (j = 0; j < i; j++)
    //     {
    //         if (val > need)
    //             break;
    //         val = val + A[j] - A[j + 1];
           
    //     }
    //     if (val > need)
    //         break;
    // }
    // int height=A[i-1];
    //  cout<<"valin"
    // // for (height = A[i - 1]; height >= 0; height--)
    // // if(val > need)i--;
    // while(val!=need && height>0 )
    // {
    //     val=0;
    //     for (int k = 0; k < i; k++)
    //     {
    //         if((A[k] - height)>0)
    //         val = val + (A[k] - height);
    //     }
    //     if (val > need)
    //        {
    //            height++;
    //        }
    //        if (val < need)
    //        {
    //            height--;
    //        }
    // }

    // return height;
    int n=V.size(); int mx=0;
    for(int i=0;i<n;i++)mx=max(mx,V[i]);
    sort(V.begin(),V.end());
    int l=1,r=mx, mid; long long cnt=0;
    while(l<=r){
        mid=l+(r-l)/2;
        cout << "\n"<<mid; 
        cnt=0;
        for(int i=0;i<n;i++){
            if(V[i]>mid)cnt+=V[i]-mid;
        }
        if(cnt>=B)
          l=mid+1;
        else
          r=mid-1;
    
    }
    return r;
}
int main()
{
    vector<int> V;
    // V.push_back(4);
    // V.push_back(42);
    // V.push_back(40);
    // V.push_back(26);
    // V.push_back(46);
     V.push_back(20);
    V.push_back(15);
    V.push_back(10);
    V.push_back(17);
    //  V.push_back(114);
    // V.push_back(55);
    // V.push_back(95);
    // V.push_back(131);
    //  V.push_back(77);
    
    // V.push_back(111);
    // V.push_back(141);
     
    
    int need = 7;
    int res = woodCutting(V, need);
    cout << " " << res << endl;

    return 0;
}