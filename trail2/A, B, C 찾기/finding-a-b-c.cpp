#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> num(7);
    for(int i = 0; i < 7; i++){
        cin >> num[i];
    }
    sort(num.begin(),num.end());
    int A_B_C = num[6];
    int A = num[0];
    int B_C = A_B_C - A;
    int B = num[1];
    int C = B_C - B;
    cout << A << " " << B << " " << C;

}