#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int N, B;
    cin >> N >> B;
    vector<int> pre_cost(N);
    vector<int> del_cost(N);

    int result = 0;
    for(int i = 0; i < N;i++)
    {
        cin >> pre_cost[i] >> del_cost[i];
    }
    
    for(int i = 0; i < N; i++) // i번째 쿠폰 사용
    {
        vector<int> temp_cost(N);
        vector<int> sum(N);
        temp_cost = pre_cost;
        temp_cost[i] = temp_cost[i] / 2;
        int count = 0;
        int student_count = 0;
        for(int j = 0; j < N; j++)
        {
            sum[j] = temp_cost[j] + del_cost[j];
        }
        sort(sum.begin(), sum.end());
        for(int j = 0; j < N; j++)
        {
            count += sum[j];
            if(count > B) break;
            else student_count++;
        }
        result = max(result, student_count);
    }
    cout << result;

    return 0;
}