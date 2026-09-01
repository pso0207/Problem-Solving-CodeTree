#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    int result = 0;
    cin >> N;
    vector<int> a(N);
    
    for(int i =0; i < N; i++){
        cin >> a[i];
    }
    int avg = accumulate(a.begin(), a.end(), 0) / N;

    for(int i = 0; i < N; i++){
        if(a[i] > avg) result += a[i] - avg;
    }
    cout << result;
    return 0;
}