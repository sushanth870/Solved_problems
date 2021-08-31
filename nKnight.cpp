
#include <bits/stdc++.h>
using namespace std;
bool isSafe(int row, int col, vector<vector<int>> board);

void nKnight(vector<vector<int>> board, int row, int col, int tk, int pk, string ans)
{
    if (tk == pk)  //ending condition
    {
        cout << ans;
        return;
    }
    if (col == board[0].size()) //for new row
    {
        row++;
        col = 0;
    }
    if (row == board[0].size()) //if board traversed completely
    {
        return;
    }

    if (isSafe(row, col, board)) //cheacking safty before we place Knight
    {
        board[row][col] = 1;     //do
        nKnight(board, row, col + 1, tk, pk + 1, ans + "(" + (char)(row + 48) + "," + (char)(col + 48) + ")"); //rec call
        board[row][col] = 0;     //undo
    }

    nKnight(board, row, col + 1, tk, pk, ans); // if not safe to place move to next step without adding it into ans
    
}

bool isSafe(int row, int col, vector<vector<int>> board) 
{
    //checking left-1st-top
    if (((0 <= (row - 2)) && (0 <= col - 1)) && board[row - 2][col - 1])
        {
            return false;
        }

    //checking left-2nd-top
    if ((0 <= (row - 1)  && 0 <= (col - 2) ) && board[row - 1][col + 2])
        {
            return false;
        }
    //checking right-1st-top    
    if ((0 <= (row - 2)  && (col + 1) < board[0].size()) && board[row - 2][col + 1])
        {
            return false;
        }
    //checking right-2nd-top    
    if (((0 <= (row - 1))  && ((col + 2) < board[0].size())) && board[row - 1][col + 2])
        {
            return false;
        }
   
   //if safe 
    return true;
}


int main()
{

    vector<vector<int>> board{
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
    };
    int totalknights = 4, placedKnights = 0,row=0,col=0;
    string ans="\n";
    nKnight(board, row, col, totalknights, placedKnights, ans);
    
    return 0;
}