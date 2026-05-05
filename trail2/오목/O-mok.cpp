#include <iostream>
#include <vector>
#include<tuple>
using namespace std;

tuple<int, int,int> find_result(vector<vector <int>> board)
{
    int row = 0;
    int col = 0;


        for(int i =0; i < 19; i++)
        {
            for(int j =0; j < 19; j++)
            {
                
                if(j+4 < 19 &&board[i][j] == 1 && board[i][j+1]==1 && board[i][j+2] ==1 &&board[i][j+3] ==1 &&board[i][j+4] ==1) 
                {
                    return {i+1, j+3, 1};
                    
                }
                else if(i+4 < 19 && j+4 << 19 && board[i][j] ==1 && board[i+1][j+1]==1 && board[i+2][j+2]==1 &&board[i+3][j+3]==1 &&board[i+4][j+4]==1)
                {
                    return {i+3, j+3,1};
                }
                else if(i-4 > 0 && j+4 < 19 &&board[i][j] ==1 && board[i-1][j+1]==1 && board[i-2][j+2]==1 &&board[i-3][j+3]==1 &&board[i-4][j+4]==1)
                {
                    return {i-1, j+3,1};
                }
                else if(i+4 < 19 && board[i][j] == 1 &&board[i+1][j] ==1 && board[i+2][j] ==1  && board[i+3][j] ==1 &&board[i+4][j]==1)
                    return {i+3, j+1,1};
            }
        }
    


        for(int i =0; i < 19; i++)
        {
            for(int j =0; j < 19; j++)
            {
                
                if(j+4 < 19 &&board[i][j] == 2 && board[i][j+1]==2 && board[i][j+2] ==2 &&board[i][j+3] ==2 &&board[i][j+4] ==2) 
                {
                    return {i+1, j+3,2};
                    
                }
                else if(i+4 < 19 && j+4 << 19 && board[i][j] ==2 && board[i+1][j+1]==2 && board[i+2][j+2]==2 &&board[i+3][j+3]==2 &&board[i+4][j+4]==2)
                {
                    return {i+3, j+3,2};
                }
                else if(i-4 > 0 && j+4 < 19 &&board[i][j] ==2 && board[i-1][j+1]==2 && board[i-2][j+2]==2 &&board[i-3][j+3]==2 &&board[i-4][j+4]==2)
                {
                    return {i-1, j+3,2};
                }
                else if(i+4 < 19 && board[i][j] == 2 &&board[i+1][j] ==2 && board[i+2][j] ==2  && board[i+3][j] ==2 &&board[i+4][j]==2)
                    return {i+3, j+1,2};
            }
        }
    return {0,0,0};
}

int main() {
    // Please write your code here.
    vector<vector <int>> board(19, vector<int>(19,0));
    for(int i =0 ; i < 19; i++)
    {
        for(int j =0; j < 19; j++)
        {
            cin >> board[i][j];
        }
    }
    tuple<int,int,int> result_pos  = find_result(board);
    if(get<2>(result_pos)==0) cout << 0;
    else
    {
    cout << get<2>(result_pos) << "\n" << get<0>(result_pos) <<" " <<  get<1>(result_pos);
    }
}