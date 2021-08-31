#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<vector<int> > &A)
{

    int n = A.size();
    cout<<"\n";
    vector<vector<int> > V(n, vector<int>(n, 0));
    cout<<"hi1";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
        	
            V[j][i] = A[i][n-1 - j];
            cout<<"hi"<<j<<","<<i<<"is: "<<V[j][i]<<"\n";
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
        cout<< V[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    vector<vector<int> > v={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        };
         for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
    rotate(v);
//    for (int i = 0; i < v.size(); i++)
//    {
//        for (int j = 0; j < v[i].size(); j++)
//            cout << v[i][j] << " ";
//        cout << endl;
//    }
}
