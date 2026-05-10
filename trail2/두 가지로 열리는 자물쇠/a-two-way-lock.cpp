#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    int a1, b1, c1;
    int a2, b2, c2;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;
    int count = 0;
    for(int i =1; i <= N; i++)
    {
        for(int j = 1;  j <= N; j++)
        {
            for(int z = 1;  z <= N; z++)
            {
                if((abs(a1-i) <= 2 ||  N - abs(a1-i) <= 2 ) &&(abs(b1-j) <= 2 ||  N-abs(b1-j) <= 2) && (abs(c1-z) <= 2 ||  N-abs(c1-z) <= 2)) count++;
                else if((abs(a2-i) <= 2 ||  N-abs(a2-i) <= 2 ) &&(abs(b2-j) <= 2 ||  N-abs(b2-j) <= 2) && (abs(c2-z) <= 2 ||  N-abs(c2-z) <= 2)) count++;
                
            }
        }
    }
    cout << count;
    return 0;
}
