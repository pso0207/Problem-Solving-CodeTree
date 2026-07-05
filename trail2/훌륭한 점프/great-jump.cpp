#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int K, N;
vector<int> num;

bool is_possible(int max_num)
{
    vector<int> temp;
    for(int i = 0; i < N; i++)
    {
        if(num[i] <= max_num)
            temp.push_back(i);
    }
    for(int i = 1; i < temp.size(); i++)
    {
        int dist = temp[i] - temp[i-1];
        if(dist > K) return false;
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
    for(int i = max(num[0], num[N-1]); i <= 100 ; i++){
        if(is_possible(i)) min_num = min(i,min_num);
    }
    cout << min_num;


    return 0;
}