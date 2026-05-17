#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int K, N;
    cin >> K >> N;
    int count = 0;
    int result = 0;
    vector<vector<int>> match(K,vector<int>(N));
    
    for(int i = 0; i < K; i++)
    {
        for(int j = 0 ; j < N; j++)
        {
            cin >> match[i][j];
        }
    }

    for(int i = 1; i <= N;i++)
    {
        int temp = i;
        for(int j = 1; j <= N; j++)
        {
            if(i == j) continue;
            int vs_temp = j;
            count = 0;
            for(int z = 0; z <K; z++)
            {
                bool temp_check = false;
                for(int k = 0; k < N; k++)
                {
                    if(match[z][k]== temp ) temp_check = true;
                    else if(match[z][k]== vs_temp && temp_check) 
                    {
                        count++;
                        break;
                    }
                    else if(match[z][k]== vs_temp && !temp_check) break;
                }
            }
            if(count == K) result++;
        }
    }
    cout << result;
    return 0;
}