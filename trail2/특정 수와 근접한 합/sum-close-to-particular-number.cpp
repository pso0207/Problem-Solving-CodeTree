#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <climits>
using namespace std;

int main() {
    int N;
    int S;
    int sum = 0;
    int result =INT_MAX;
    cin >> N >> S;
    vector<int> num(N);
    for(int i = 0; i < N; ++i)
    {
        cin >> num[i];
    }
    for(int i = 0; i<N; ++i)
    {
        for(int j = i+1; j < N; ++j)
        {
            sum = accumulate(num.begin(), num.end(), 0);
            sum -= num[i] + num[j];
            result = min(result, abs(S-sum));
        }
    }
    cout << result;
    return 0;
}