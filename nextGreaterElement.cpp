#include <bits/stdc++.h>
using namespace std;

// vector<int> NGE (vector<int> v){
//     stack<int> st;
//     vector<int> ans(v.size(),-1);
//     for(int i=0;i<v.size();i++){
//         if(st.empty() || v[st.top()] > v[i]){
//             st.push(i);
//         }
//         else{
//             while(!st.empty() && v[st.top()] < v[i]){
//                 ans[st.top()]=v[i];
//                 st.pop();
//             }
//             st.push(i);
//         }
//     }

//     return ans;
// }

vector<int> NGE(vector<int> arr)
{
    // Your code here
    stack st;
    vector<int> res;
    st.push(arr[0]);
    for (int i = 1; i < n; i++)
    {
        else
        {
            while (arr[i] > st.top())
            {
                res.push_back(arr[i]);
                
                // cout<<st.top()<<endl;
                st.pop();
            }
        }
        st.push(arr[i]);
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> ans = NGE(v);
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}