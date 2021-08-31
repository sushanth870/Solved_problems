#include <bits/stdc++.h>

using namespace std;

int solve(string A)
{
    stack<char> St;
    int n = A.size();
    // St.push('#');
    int i = 0;
    if (A[i] == ')')
        return 0;
    while (A[i] != '\0')
    {
        // cout << A[i] << endl;
         if (St.empty())
        {
            if (A[i] == ')')
                return 0;
        }
        
            if (A[i] == '(')
            {
                St.push('(');
            }
            else
            {
                St.pop();
            }
            i++;
        
       
        // cout << A[i] <<"at: "<<i<< endl;
    }
     if (St.empty())
    {

        return 1;
    }
    else
    {
        // cout << "inside 2";
        return 0;
    }
}

int main()
{

    string A;
    A = "(()((((()(";
    int c = solve(A);
    cout << endl
         << c;
    return 0;
}
