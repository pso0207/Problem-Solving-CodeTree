#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int N, M;
    int result = 0;
    cin >> N >> M;
    vector<vector<int>> num(M, vector<int>(2));
    for(int i = 0; i <M; i++)
    {
        cin >> num[i][0] >> num[i][1];
    }

    for(int i = 0; i < M; i++)
    {
        int a = num[i][0];
        int b = num[i][1];
        int max_cnt = 0;
        for(int j = 0; j < M; j++)
        {
            if((a == num[j][1] && b == num[j][0]) || (a == num[j][0] && b == num[j][1])) max_cnt++;
        }
        result = max(max_cnt, result);
    }
    cout << result;
    

    return 0;
}