#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>>Pst(int A)
{

   
   if(!A) return {};
    if(A==1) return {{1}};
    if(A==2) return {{1},{1,1}};
    vector<vector<int> > V(A);
    for(int i = 0; i < A; i++){
    	int val=1;
        for(int j = 0; j <i;j++)
        {
            V[i].push_back(val);
            val=val*(i-j)/(j+1);
        }
        V[i].push_back(1);
        cout <<endl;
    }return V;

}
int main()
{
    vector<vector<int> > v;
    int rows=5;
    v=Pst(rows);
   for (int i = 0; i < v.size(); i++)
   {
       for (int j = 0; j < v[i].size(); j++)
           cout << v[i][j] << " ";
       cout << endl;
   }
}
