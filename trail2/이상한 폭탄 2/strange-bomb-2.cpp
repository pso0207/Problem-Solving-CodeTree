#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int boom = -1;
    vector<int> num(N);
    for(int i = 0; i < N; i++)
    {
        cin >> num[i];
    }

    for(int i = 0; i < N; i++)
    {
        int temp = num[i];
        for(int j = 0;  j < N; j++)
        {
            if(i == j) continue;
            if(temp == num[j] && abs(i-j) <= K) boom = max(boom,temp);
        }
    }
    cout << boom;
    return 0;
}