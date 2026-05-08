#include <iostream>
#include <vector>
using namespace std;
// 방향배열 선언해서 풀어보기
int main() {
    int N;
    cin>> N;
    vector<vector<int>> arr(N, vector<int>(N));
    int count = 0;
    int count2 = 0;
    int result = 0;
    int row =0;
    int col =0 ;
    for(int i = 0 ; i < N; i++)
    {
        for(int j = 0 ; j < N; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < N; i++)
    {
        for(int j = 0;  j < N; j++)
        {
            if(j+2 > N-1)
            {
                break;;
            }
            else
            {
                result = arr[i][j] + arr[i][j+1] + arr[i][j+2];
                if(result  > count)
                {
                    count = result;
                    row = i;
                    col = j;
                }
            }

        }
    }
    arr[row][col] = 0;
    arr[row][col+1] =0;
    arr[row][col+2] = 0;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0;  j < N; j++)
        {
            if(j+2 > N-1)
            {
                break;;
            }
            else
            {
                result = arr[i][j] + arr[i][j+1] + arr[i][j+2];
                if(result  > count2)
                {
                    count2 = result;
                }
            }
        }
    }
    cout << count + count2;
    return 0;
}