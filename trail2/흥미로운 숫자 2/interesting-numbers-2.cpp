#include<algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int X, Y;
    cin >> X >> Y;
    int result = 0;
    for(int i = X; i <= Y;i++)
    {
        int temp = i;
        int count = 0;
        int digit_count[10] = {0};
        while(temp != 0)
        {
            digit_count[temp%10]++;
            count++;
            temp /= 10;
        }
        for(int i =0 ; i < 10; i++)
        {
            if(digit_count[i] == count-1)
            {
                result++;
                break;
            }
        }

    }
    cout << result;
    return 0;
}
