#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > Sr2(int A)
{
   	int n =A;
    int t,l,r,b,count=1;
    vector<vector<int> > V(A, vector<int>(A, 0));
    for (int i = 0; i < A/2; i++)
    {
    	for(t=i;t<=A-1-i;t++)
    	{
    		V[i][t] = count;
    		count++;
		}
		for(l=i+1;l<=A-1-i;l++)
    	{
    		V[l][A-1-i] = count;
    		count++;
		}
		for(r=A-2-i;r>=i;r--)
    	{
    		V[A-1-i][r] = count;
    		count++;
		}
		for(b=A-2-i;b>=i+1;b--)
    	{
    		V[b][i] = count;
    		count++;
		}
    }
    if(A%2!=0){
    	V[A/2][A/2]=A*A;
	}

   return V;
}
int main()
{
    vector<vector<int> > v;

    v=Sr2(5);
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
}
