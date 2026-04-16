#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    vector<int> A(N,0);
    int min_val = INT_MAX;
    int sum = 0;
    for(int i = 0; i < N; i++)
    {
        cin >>A[i];
    }
    
    for(int i =0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            sum += A[j] * abs((j -i));
        }
        if(sum <  min_val) min_val = sum;
        sum = 0;
    }
    cout << min_val;
    return 0;
}