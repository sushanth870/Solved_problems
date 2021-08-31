#include <bits/stdc++.h>
using namespace std;

vector<int> SearchRange(vector<int> &A, int B)
{
    int f = 0, l = A.size() - 1, mid = 0, start = -1, end = -1, ml;
    vector<int> V;
    while (f < l)
    {
            // cout <<"in "<<f<<" "<<l<<"\n";
        mid = (f + l + 1) / 2;
        if (A[mid] == B)
        {
            break;
        }
        else
        {
            if (A[mid] > B)
            {
                l = mid - 1;
            }
            else if (A[mid] < B)
            {
                f = mid + 1;
            }
        }
    }
    if ((f >= l) && (A[f]!=B))
    {
        V.push_back(start);
        V.push_back(end);
        return V;
    }
    else if ( f==l  && (A[f]==B) )
    {
        V.push_back(f);
        V.push_back(f);
        return V;
    }
    else
    {
        ml = mid;
        while (ml > 0)
        {
            if (A[ml - 1] != B)
            {
                break;
            }
            ml--;
        }
        start = ml;
        ml = mid;
        while (ml +1 < A.size())
        {
            if (A[ml+1] != B)
            {
                break;
            }
            ml++;
        }
        end = ml;
    }
    V.push_back(start);
    V.push_back(end);
    return V;
}
int main()
{
    vector<int> A;
    vector<int> C;
    
    A.push_back(1);
    A.push_back(1);
    A.push_back(1);
    A.push_back(1);
    A.push_back(2);
    A.push_back(2);
    A.push_back(2);
    A.push_back(3);
    A.push_back(3);
    A.push_back(3);
    A.push_back(3);
    A.push_back(4);
    A.push_back(4);
    A.push_back(5);
    A.push_back(5);
    A.push_back(5);
    A.push_back(5);
    A.push_back(6);
    A.push_back(7);
    A.push_back(7);
    A.push_back(7);
    A.push_back(7);
    A.push_back(7);
    A.push_back(7);
    A.push_back(8);
    A.push_back(8);
    A.push_back(9);
    A.push_back(9);
    A.push_back(9);
    A.push_back(9);







    int B = 7;
    C = SearchRange(A, B);
    cout << C[0] << " " << C[1];

    return 0;
}