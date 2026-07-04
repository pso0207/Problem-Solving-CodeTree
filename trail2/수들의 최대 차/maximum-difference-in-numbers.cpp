#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int N, K;
    int max_cnt = 0;
    cin >> N >> K;
    vector<int> num(N);
    for(int i = 0; i < N; i++)
    {
        cin >> num[i];
    }

    for(int i = 0; i < N; i++)
    {
        int temp = num[i]; // num[i]가 최소값이라고 가정
        int cnt = 0;
        for(int j = 0; j < N; j++)
        {
            if((temp - num[j]) <= K && (temp - num[j]) >= 0) cnt++;
        }
        max_cnt = max(max_cnt, cnt);
    }
    cout << max_cnt;
    return 0;
}



