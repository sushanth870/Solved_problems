#include <bits/stdc++.h>
using namespace std;
int grid[9][9];
void printsudo(int grid[9][9])
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << "\n";
    }
}

void recFun(int grid[9][9], int i, int j, bool &res)
{
    if (j > 8)
    {
        j = 0;
        i++;
    }
    if (i > 8)
    {
        res = true;
        return;
    }
    if (grid[i][j] == 0)
    {
        // cout << "(i,j): " << i << "," << j << endl;

        set<int> setv;
        for (int col = 0; col < 9; col++)
        {
            if (grid[i][col] != 0)
                setv.insert(grid[i][col]);
        }
        for (int row = 0; row < 9; row++)
        {
            if (grid[row][j] != 0)
                setv.insert(grid[row][j]);
        }
        set<int>::iterator itr;
        // cout << "\nThe setv setv is : \n";
        // for (itr = setv.begin(); itr != setv.end(); itr++)
        // {
        //     cout << *itr << " ";
        // }
        if (setv.size() == 9)
        {
            return;
        }
        else
        {
            vector<int> v;
            for (int k = 1; k <= 9; k++)
            {
                if (setv.find(k) == setv.end())
                {
                    v.push_back(k);
                }
            }
            // cout << "k values: ";
            // for (int k = 0; k < v.size(); k++)
            // {
            //     cout << v[k] << " ";
            // }
            for (int k = 0; k < v.size(); k++)
            {
                grid[i][j] = v[k];
                recFun(grid, i, j + 1, res);
                if (res)
                    break;
                grid[i][j] = 0;
            }
        }

        return;
    }
    else
    {

        recFun(grid, i, j + 1, res);
        return;
    }
}

bool solveSudo(int grid[9][9])
{

    bool res = false;
    recFun(grid, 0, 0, res);
    return res;
}

int main()
{

    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
        {
            cin >> grid[i][j];
        }

    if (solveSudo(grid))
    {
        cout << "-------------------------\n";
        printsudo(grid);
    }
    else
    {

        cout << "\nsolution not exist\n";
        
    }
    return 0;
}