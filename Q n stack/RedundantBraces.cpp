
#include <bits/stdc++.h>

using namespace std;
int braces(string A)
{
// cout <<A;
    stack<char> st;
    int i = 0;
    while (A[i] != '\0')
    {
        if (A[i] == '(' || A[i] == '+' || A[i] == '-' || A[i] == '*' || A[i] == '/')
        {
            // cout <<"inhere\n: " <<A[i] << endl;
            st.push(A[i]);
            
        }
        else
        {

            // cout << A[i] << " cmp " << st.top() << endl;
            if (A[i] == ')' && st.top() == '(')
            {
                return 1;
            }
            else if(A[i]==')')
            {
                while (st.top() != '(')
                {
                    if (!st.empty())
                    {
                        // cout << st.top() << endl;
                        st.pop();
                    }
                    
                }
                if (!st.empty())
                {
                    // cout << "2nd last :" <<st.top() << endl;
                    st.pop();
                }
                
               
                
                 
                 
                // cout << "last :" << st.top() << endl;
            }
           

        }
         i++;
    }
    
    return 0;
}

int main()
{

    string A;
    A = "(a)";
    int c = braces(A);
    cout << endl
         << c;
    return 0;
}

// (a+b)+(c+(((a+b)+c))