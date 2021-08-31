#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &A, int B)
{
    int i, j, mid, res, found = -1;
    i = 0;
    j = A.size() - 1;
    while (i < j)
    {

        if (A[i] == B)
        {
            found = i;
            ;
            break;
        }
        if (A[j] == B)
        {
            found = j;
            break;
        }
        mid = (i + j) / 2;
        if (A[mid] == B)
        {
            found = mid;
            break;
        }
        if (A[mid] > B)
        {
            j = mid - 1;
        }
        if (A[mid] < B)
        {
            i = mid + 1;
        }
    }
    if (found >= 0)
    {

        while (A[found + 1] == B && found < A.size())
        {

            found++;
        }
        res = found + 1;
    }
    else if ((i == j || j < i))
    {

        while (A[mid] > B && mid > 0)
        {
            mid--;
        }
        while (A[mid] < B && mid < A.size())
        {
            mid++;
        }
        res = mid;
    }
    else
    {
    }

    return res;
}

int main()
{
    vector<int> V;
    V.push_back(1);
    V.push_back(1);
    V.push_back(1);
    V.push_back(1);
    V.push_back(1);
    V.push_back(1);
    V.push_back(1);
    V.push_back(1);
    V.push_back(1);
    V.push_back(1);

    int d = solve(V, 1);
    cout << d << endl;
}
