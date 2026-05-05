#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    vector<int> num(N);
    int result = INT_MIN;
    for(int i =0 ; i <N; i++)
    {
        cin >> num[i];
    }

    for(int i = 0; i < N; i++)
    {
        for(int j = i+2; j < N; j++)
        {
            result = max(result, num[i] + num[j]);
        }
    }
    cout << result;
    return 0;
}