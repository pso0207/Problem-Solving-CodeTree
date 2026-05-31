#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int X, Y;
    int result = 0;
    cin >> X >> Y;

    for(int i = X; i <= Y; i++)
    {
        int temp = i;
        vector<int> digit;
        while(temp !=0)
        {
            digit.push_back(temp%10);
            temp /= 10;
        }

        for(int j =0; j < digit.size()/2; j++)
        {

            if(j == digit.size()/2 -1 && digit[j] == digit[digit.size() - j -1]) result++;
            else if(digit[j] == digit[digit.size() - j -1]) continue;
            else break;
        }
    }

    cout << result;
    return 0;
}

