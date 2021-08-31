#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<char>> board{
    {'G','I','Z'},
    {'U','E','K'},
    {'Q','S','E'}
    };
    map<char,vector<pair<int,int> > > m;
        
    int i,j,k;
    for( i=0;i<board.size();i++){
        for( j=0;j<board[i].size();j++){
                m[board[i][j]].push_back(make_pair(i,j));
        }
    }

      cout<<"size of board:"<<m.size()<<endl;

    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[i].size();j++){
                int n=m[board[i][j]].size();
                for(int k=0;k<n;k++){
                    cout<<board[i][j]<<": "<<m[board[i][j]][k].first<<" "<<m[board[i][j]][k].second<<endl;
            }
        }
    }
}