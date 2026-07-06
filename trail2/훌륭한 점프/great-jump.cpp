#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int K, N;
vector<int> num;

bool is_possible(int max_num)
{
    int last_idx = 0;
    for(int i = 0; i < N; i++)
    {
        if(num[i] <= max_num)
        {
            if(i - last_idx > K)
                return false;
            last_idx = i;
        }
    }
    return true;
}

int main() {
    // Please write your code here
    cin >> N >> K;
    int min_num = INT_MAX;
    for(int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        num.push_back(temp);
    }
    // 처음과 끝은 무조건 지나는 지점이다
    // 최댓값의 최소이기 때문에 이 지점보다 작을 순 없다.
    for(int i = max(num[0], num[N-1]); i <= 100 ; i++){
        if(is_possible(i)) min_num = min(i,min_num);
    }
    cout << min_num;


    return 0;
}