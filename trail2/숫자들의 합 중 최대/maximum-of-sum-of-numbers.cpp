#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int X, Y;
    int result = 0;
    cin >> X >> Y;
    for(int i = X; i <= Y; i++)
    {
        int count = 0;
        int temp = i;
        while(temp != 0)
        {
            count += temp %10;
            temp /= 10;
        }
        result = max(count, result);

    }
    cout << result;
    return 0;
}

