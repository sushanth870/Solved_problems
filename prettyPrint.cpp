#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > Sr2(int A)
{
   	
    int t,l,r,b,count=A;
    vector<vector<int> > V((A*2)-1, vector<int>((A*2)-1, 0));
    for (int i = 0; i < (A*2)-1; i++)
    {
        
    	for(t=i;t<=(A*2)-2-(i);t++)
    	{
    		V[i][t] = count;
    		
		}
        
		for(l=i;l<=(A*2)-2-i;l++)
    	{
    		V[l][(A*2)-2-i] = count;
    		

		}
		for(r=(A*2)-2-i;r>=i;r--)
    	{
            
    		V[(A*2)-2-i][r] = count;
    		
		}
		for(b=(A*2)-2-i;b>=i+1;b--)
    	{
    		V[b][i] = count;
    		
		}
        count--;
    }
    // if(A%2!=0){
    // 	V[A/2][A/2]=A*A;
	// }

   return V;
}
int main()
{
    vector<vector<int> > v;

    v=Sr2(3);
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
}
