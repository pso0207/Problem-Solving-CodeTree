#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    int M;
    int result = INT_MIN;
    cin >> N >> M;
    vector<int> arr(N);
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for(int i =0 ; i < N; i++)
    {
        int move = i;
        int count = 0;
        for(int j = 0; j < M; j++)
        {
            count += arr[move];
            move = arr[move]-1;
        }
        result = max(count, result);
    }
    cout << result;
    return 0;
}