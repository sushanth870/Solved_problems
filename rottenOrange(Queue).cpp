#include <bits/stdc++.h>
using namespace std;

int orangesRotting(vector<vector<int>> &grid)
{
    queue<pair<int, int>> qu;
    for (int i = 0; i < grid.size(); i++)
        for (int j = 0; j < grid[i].size(); j++)
        {
            if (grid[i][j] == 2)
            {
                qu.push(make_pair(i, j));
            }
        }

    while (!qu.empty())
    {
        pair<int, int> temp1;
        temp1 = qu.front();
        qu.pop();
        // cout << temp1.first << "," << temp1.second << endl;
        if (temp1.first - 1 >= 0 && grid[temp1.first - 1][temp1.second] == 1  )
        {
            // cout<<"in if 1\n";
            grid[temp1.first - 1][temp1.second] = grid[temp1.first][temp1.second] + 1;
            qu.push(make_pair(temp1.first - 1, temp1.second));
            // cout << "pushed: " << temp1.first - 1 << "," << temp1.second << endl;
        }
        if ( temp1.first + 1 < grid.size() && grid[temp1.first + 1][temp1.second] == 1 )
        {
            // cout<<"in if 2\n";
            grid[temp1.first + 1][temp1.second] = grid[temp1.first][temp1.second] + 1;
            qu.push(make_pair(temp1.first + 1, temp1.second));
            // cout << "pushed: " << temp1.first + 1 << "," << temp1.second << endl;
        }
        if (grid[temp1.first][temp1.second - 1] == 1 && temp1.second - 1 >= 0)
        {
                        // cout<<"in if 3\n";
            grid[temp1.first][temp1.second - 1] = grid[temp1.first][temp1.second] + 1;
            qu.push(make_pair(temp1.first, temp1.second - 1));
            // cout << "pushed: " << temp1.first << "," << temp1.second - 1 << endl;
        }
        if (grid[temp1.first][temp1.second + 1] == 1 && temp1.second + 1 < grid[temp1.first].size())
        {
                        // cout<<"in if 4\n";
            grid[temp1.first][temp1.second + 1] = grid[temp1.first][temp1.second] + 1;
            qu.push(make_pair(temp1.first, temp1.second + 1));
            // cout << "pushed: " << temp1.first << "," << temp1.second + 1 << endl;
        }
        // showQueue(qu);
    }
    // cout << "exit";
    int ans = -999;
    for (int i = 0; i < grid.size(); i++)
        for (int j = 0; j < grid[i].size(); j++)
        {
            if (grid[i][j] == 1)
            {
                return -1;
            }
            else
            {
                if (ans < grid[i][j])
                {
                    ans = grid[i][j];
                }
            }
        }
    return ans - 2;
}
int main()
{
    vector<vector<int>> grid{{0, 1, 2}, {0, 1, 1}, {1, 1, 1}};
    cout << orangesRotting(grid) << endl;
}