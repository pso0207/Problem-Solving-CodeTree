#include <iostream>
#include <vector>
using namespace std;

int find_min(int N, vector<int> a, vector<int> b)
{
    for(int i = 1; i < 10000; i++)
    {
        int result = i;
        bool clear = false;
        for(int j = 0; j < N; j++)
        {
            result *= 2;
            if(result >= a[j] && result <= b[j]) {
                if(j == N-1) clear = true;
                else continue;
            }
            else break;
        }
        if(clear == true) return i;
    }
    return 0;

}

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    vector<int> b(N);
    for(int i = 0; i < N; i++)
    {
        cin >> a[i] >> b[i];
    }
    int result = find_min(N,a,b);
    cout << result;
    return 0;
}