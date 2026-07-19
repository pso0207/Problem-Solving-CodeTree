#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int A,B,x,y;
    cin >> A >> B >> x >> y;
    int pos = A;
    int result1 = abs(A-B);
    int result2 = abs(A-x) + abs(y-B);
    int result3 = abs(A-y) + abs(x-B);
    int result = min({result1,result2,result3});

    cout << result;

    return 0;
}