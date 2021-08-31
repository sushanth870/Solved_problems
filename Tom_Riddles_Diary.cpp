#include <bits/stdc++.h>
using namespace std;
// bool cheackIfAlreadyTook(map<int, int> m, int k)
// {
//     bool a = true;
//     for (auto i : m)
//     {
//         if (i.second == k)
//         {
//             return true;
//         }
//     }
//     return false;
// }
void cheackDb(vector<string>str)
{   
    set<string> st;

    for (int i = 0; i < str.size(); i++){
        if(st.find(str[i])!=st.end()){
            cout << "YES\n";
        }
        else{
            st.insert(str[i]);
            cout << "NO\n";
        }
    }

}

int main()
{
    int n;
    vector<string> str;
    cin>>n;
    while (n--)
    {
        string s;
        cin>>s;
        str.push_back(s);
    }

    cheackDb(str);
    return 0;
    

   
}