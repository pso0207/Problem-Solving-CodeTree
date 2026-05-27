#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int N;
    cin >> N;
    int result = INT_MIN;
    vector<int> num(N);
    for(int i =0 ;i < N; i++)
    {
        cin>> num[i];
    }
    

    for(int i = 1; i <= 100; i++) 
    {
        int count = 0;
        for(int j = 0; j < N; j++) //K
        {
            for(int z = j+1; z < N; z++)
            {
                if(i-num[j] == num[z] - i) count++;
            }
        }
        result = max(count,result);
    }
    cout << result; 
    return 0;
}