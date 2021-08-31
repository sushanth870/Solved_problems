#include <bits/stdc++.h>
using namespace std;
bool isSafe(int row, int col,vector<vector<int> > board);

void solveQueen(vector<vector<int> > board, int row, int col, int tq, int pq,string ans)
{

    if(tq==pq){
        cout << ans;
        // cout<<"("<<row<<","<<col<<")";
        return;
    }
    if (col == board[0].size())
    {
        row++;
        col = 0;
    }
    if (row == board[0].size())
    {
        return;
    }

    if (isSafe(row, col,board))
    {
        board[row][col] = 1;
        solveQueen(board, row, col + 1, tq, pq + 1,ans+"("+(char)(row+48)+","+(char)(col+48)+")");
        board[row][col] = 0;
    }

    solveQueen(board, row, col + 1, tq, pq,ans);
}

bool isSafe(int row, int col,vector<vector<int> > board){

    int r=row;
    int c=col;
    // virtical up
    while(r>=0){
        if(board[r][c])
        return false;

        r--;
    }
     // horizontal left
     r=row;
     c=col-1;
    while(c>=0){
        if(board[r][c])
        return false;

        c--;
    }

    //diagonal left
     r=row-1;
     c=col-1;
    while(c>=0 && r>=0){
        if(board[r][c])
        return false;

        c--;
        r--;

    }
    //diagonal right
     r=row-1;
     c=col+1;
    while(c<board[0].size() && r>=0){
        if(board[r][c])
        return false;

        c++;
        r--;

    }
    return true;
}
  
int main()
{

    vector<vector<int> > board(4,vector<int> (4,0));
    for(int i=0; i<4;i++){
        for(int j=0;j<4;j++){
            cout<<board[i][j];
        }
        cout<<"\n";
    }
    int tq = 4;
    int pq = 0;
    solveQueen(board, 0, 0, tq, pq,"");
}