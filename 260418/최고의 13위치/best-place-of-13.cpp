#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    int max_val = INT_MIN;
    vector<vector<int>> v(N, vector<int>(N,0));
    for(int i =0 ; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cin >> v[i][j];
        }
    }

    for(int i =0; i < N; i++)
    {
        for(int j = 0; j < N-2; j++)
        {
            max_val = max(max_val,v[i][j] + v[i][j+1]+ v[i][j+2] );
        }
    }
    cout << max_val;
    return 0;
}