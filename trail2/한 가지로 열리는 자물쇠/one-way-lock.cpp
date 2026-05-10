#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N, a, b, c;
    cin >> N >> a >> b >> c;
    int count =0;
    for(int i = 1; i<= N; i++)
    {
        for(int j =1; j <= N; j++)
        {
            for(int z =1; z <=N; z++)
            {
                if(abs(a-i) <= 2 ||abs(b-j) <= 2 || abs(c-z) <= 2) count++;
            }
        }
    }
    cout << count ;
    return 0;
}