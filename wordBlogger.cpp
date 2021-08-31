#include <bits/stdc++.h>
using namespace std;

void recFunction(vector<vector<char>> &board, int row, int col, int index, string word, bool &found, string check)
{

    if (row >= board[0].size() || col >= board[0].size() || row < 0 || col < 0 || board[row][col] == '#')
        return;
    if (check == word)
    {
        
        found = true;
        return;
    }

    if (board[row][col] == word[index])
    {
        board[row][col] = '#';
        recFunction(board, row, col + 1, index + 1, word, found, check + word[index]);
        recFunction(board, row + 1, col, index + 1, word, found, check + word[index]);
        recFunction(board, row - 1, col, index + 1, word, found, check + word[index]);
        recFunction(board, row, col - 1, index + 1, word, found, check + word[index]);
        recFunction(board, row + 1, col + 1, index + 1, word, found, check + word[index]);
        recFunction(board, row - 1, col + 1, index + 1, word, found, check + word[index]);
        recFunction(board, row + 1, col - 1, index + 1, word, found, check + word[index]);
        recFunction(board, row - 1, col - 1, index + 1, word, found, check + word[index]);
        board[row][col] = word[index];
    }
    else
    {
        return;
    }
   
}
vector<string> wordBoggle(vector<vector<char>> &board, vector<string> &dictionary)
{
    vector<string> result;
    map<char, vector<pair<int, int>>> m;

    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        {
            m[board[i][j]].push_back(make_pair(i, j));
        }
    }
   
    for (int i = 0; i < dictionary.size(); i++)
    {
        bool found = false;
        if (m.find(dictionary[i][0]) != m.end())
        {
            for (int k = 0; k < m[dictionary[i][0]].size(); k++)
            {
                int x = m[dictionary[i][0]][k].first;
                int y = m[dictionary[i][0]][k].second;
                recFunction(board, x, y, 0, dictionary[i], found, "");
                if(found)
                {
                    result.push_back(dictionary[i]);
                    break;
                }
            }
        }
    }

    return result;
}
int main()
{
    int n;
    cin >> n;
    vector<string> str;
    for (int i = 0; i < n; i++)
    {
        string takString;
        cin >> takString;
        str.push_back(takString);
    }
    int r, c;
    cin >> r >> c;
    vector<vector<char>> board(r, vector<char>(c));

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> board[i][j];
        }
    }

    vector<string> ans = wordBoggle(board, str);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}