#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A, B, C;
    cin >> A >> B >> C;
    int result = 0;
    for(int i = 0; i < 1000; i++)
    {
        int temp = C;
        temp -= i * A;
        if(temp < 0){
            break;
        }
        while(temp >= 0){
            temp -= B;
        }
        temp += B;
        result = max(result, C-temp);
    }
    cout << result;

}