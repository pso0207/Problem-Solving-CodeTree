#include <iostream>
#include <climits>
using namespace std;

int K;
int N;
int num[100];

bool is_possible(int max_num){
    int last_idx = 0;

    for(int i = 0; i < N; i++)
    {
        if(num[i] > max_num) continue;
        else{
            if(i - last_idx > K) return false;
            else last_idx = i;
        }
    }
    return true;
}

int main() {
    // Please write your code here.
    cin >> N >> K;
    int result = INT_MAX;
    for(int i = 0; i < N; i++)
    {
        cin >> num[i];
    }
    for(int i = max(num[0], num[N-1]); i <= 100; i++){
        if(is_possible(i)){
            result = min(result, i);
        }
    }
    cout << result;
    return 0;
}