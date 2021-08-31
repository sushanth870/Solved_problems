#include <bits/stdc++.h>
using namespace std;

void recFun(vector<vector<int>> &maze, int row, int col, int n, string s,vector <string > &result)
{
        if(row>=n || col>=n || row<0 || col<0 || maze[row][col]==0)
        return;
        else if ((row == n - 1) && (col == n - 1))
        {
            result.push_back(s);
            return;
        }
        else    
        {
            maze[row][col] = 0;
            recFun(maze, row+1, col,   n,s+'D' ,result);
            recFun(maze, row,   col+1, n,s+'R' ,result);
            recFun(maze, row,   col-1, n,s+'L' ,result);
            recFun(maze, row-1, col,   n,s+'U' ,result);
            maze[row][col] = 1;
        }
    }

    

    vector<string> findPath(vector<vector<int>> & maze, int n)
    {
        vector<string> result;
         recFun(maze, 0, 0, n," ", result);
        
        return result;
    }

    int main()
        {
            // int n;
            // cin >> n;
            vector<vector<int>> maze{{1, 0, 0, 0},
                                     {1, 1, 0, 1},
                                     {1, 1, 0, 0},
                                     {0, 1, 1, 1}};
            vector<string> ans = findPath(maze, 4);
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i] << endl;
            }
        }