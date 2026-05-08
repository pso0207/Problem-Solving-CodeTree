#include <iostream>
#include <map>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    int K;
    cin >> N >> K;
    int arr[10001] = {0};
    int sum = 0;
    int result = 0;
    for(int i = 1; i <=N; ++i)
    {
        int num =0;
        char ch;
        cin >> num >> ch;
        arr[num] = (ch == 'G') ? 1 : 2;
    }


    for(int i = 1; i <= 10000-K; ++i)  //9997 
    {
        sum =0;
        for(int j = 0; j <= K; ++j) // 9997 9998 9999
        {
            sum += arr[i+j];
        }
        result= max(result,sum);
    }

    cout << result;
    return 0;
}