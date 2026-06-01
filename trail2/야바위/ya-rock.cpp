#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >>N;
    int result = 0;
    vector<int> a(N);
    vector<int> b(N);
    vector<int> c(N);
    for(int i = 0 ;i < N; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
    }

    for(int i = 1; i <= 3; i++) // 조약돌 위치
    {
        int count =0;
        int stone_pos = i;
        for(int j = 0; j < N; j++)
        {
            if(stone_pos == a[j]) stone_pos = b[j];
            else if(stone_pos == b[j]) stone_pos = a[j];

            if(stone_pos == c[j]) count++;
        }
        result = max(result, count);
    }
    cout << result;
    return 0;
}