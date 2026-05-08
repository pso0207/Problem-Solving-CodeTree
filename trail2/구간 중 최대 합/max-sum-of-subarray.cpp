#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    int K;
    cin >> N >> K;
    int max_num = INT_MIN;
    int sum = 0;
    int result =0;
    vector<int> num(N);
    for(int i = 0; i < N; i++)
    {
        cin >>num[i];
    }


    for(int i = 0; i <= N-K;i++) 
    {
        sum =0;
        for(int j =0; j <K; j++)
        {
            
            sum+= num[i+j];  
        }
        result = max(result,sum);
    }
    cout << result;
    return 0;
}