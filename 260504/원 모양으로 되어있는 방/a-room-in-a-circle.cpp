#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

int main() {
    
    int N; 
    cin >> N;
    int temp_result = 0;
    int result = INT_MAX;
    vector<int> num;
    for(int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        num.push_back(temp);
    }

    for(int i = 0; i < num.size(); i++) // i가 시작하는 방
    {
        for(int j =0 ; j < num.size(); j++) // 3 1 
        {
            if(i > j)
            {
                temp_result += num[j] * (num.size() - i + j);
            }
            else
            {
            temp_result += num[j] * (j-i);
            }
        }
        result = min(temp_result, result);
        temp_result = 0;
    }
    cout << result;
    return 0;
}