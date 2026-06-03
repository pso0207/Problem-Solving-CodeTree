#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A, B, C;
    cin >> A >> B >> C;
    int result = 0;
    for(int i = 0; i <= C/A; i++) // A를 고른 횟수
    {
        int temp = i * A; 
        int count_B = (C -temp) /B;
        
        result = max(result, temp + B*count_B);
    }
    cout << result;

}

