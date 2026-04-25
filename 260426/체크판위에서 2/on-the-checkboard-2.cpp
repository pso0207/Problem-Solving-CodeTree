#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int count = 0;
    int rows;
    int cols;
    cin >> rows >> cols;
    vector<vector<char>> arr(rows,vector<char>(cols));
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i = 1;  i <rows; i++)
    {
        for(int j = 1; j < cols; j++)
        {
            if(arr[0][0] != arr[i][j]){
                for(int z = i+1; z < rows-1; z++)
                {
                    for(int l = j+1; l< cols-1; l++)
                    {
                        if(arr[z][l] != arr[i][j])
                        {
                            count++;
                        }
                    }
                }
            }

        }
    }
    cout << count;

    return 0;
}