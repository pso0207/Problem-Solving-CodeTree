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
    int target = accumulate(a.begin(), a.end(), 0) / N;

    for(int i = 0; i < N; i++){
        while(a[i] != target){
            if(a[i] > target) {
                a[i]--;
                result++;
            }
            else if(a[i] < target) {
                a[i]++;
                result++;
            } 
        }
    }
    cout << result/2;

    return 0;
}