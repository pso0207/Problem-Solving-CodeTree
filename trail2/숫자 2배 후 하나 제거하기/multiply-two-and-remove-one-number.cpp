#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    int result = INT_MAX;
    vector<int> num(N);
    for(int i = 0; i < N; i++)
    {
        cin >> num[i];
    }

    for(int i =0; i < N; i++)
    {
        num[i] *= 2;

        for(int j = 0; j < N; j++)
        {
            vector<int> remain_num;
            int diff_num = 0;
            for(int z = 0; z < N; z++)
            {
                if(j == z) continue;
                remain_num.push_back(num[z]);
            }
            for(int z = 0; z < N-2; z++)
            {
                diff_num += abs(remain_num[z] - remain_num[z+1]);
            }
            result = min(result, diff_num);
        }
        num[i] /= 2;
    }
    cout << result;
    return 0;
}