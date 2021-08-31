
#include <bits/stdc++.h>

using namespace std;
string FNR(string A)
{
    // cout <<A;
    queue<char> q;
    string B = "";
    int i = 0;
    while (A[i] != '\0')
    {
        if (i == 0)
        {
            // cout << "inhere3\n";
            q.push(A[i]);
            B = B + q.front();
            i++;
        }
        else
        {
            if (q.front() != A[i] && q.front() != -1)
            {
                // cout << "inhere2\n";
                q.push(A[i]);
                B = B + q.front();
                i++;
            }
            else
            {
                if (!q.empty())
                {
                    // cout << "inhere1\n";
                    // cout << q.front() << endl;
                    q.pop();
                    // cout << q.front() << endl;
                    if (q.empty())
                    {
                        B = B + "#";
                        i++;
                    }
                    else
                    {
                        B = B + q.front();
                        i++;
                    }
                }
                else
                {
                    // cout << "inhere\n";
                    B = B + "#";
                    i++;
                }
            }
        }
    }

    return B;
}

int main()
{

    string A;
    A = "abcabca";
    string c = FNR(A);
    cout << endl
         << c;
    return 0;
}

// (a+b)+(c+(((a+b)+c))