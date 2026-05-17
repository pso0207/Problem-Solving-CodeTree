#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N;
    int B;
    int sum= 0;
    int result =0;
    int count = 0;
    cin >> N >> B;
    vector<int> P(N);
    vector<int> temp(N);
    for(int i = 0 ; i < N; i++)
    {
        cin >> P[i];
    }

    for(int i = 0; i < N; i++)
    {
        temp = P;
        temp[i] = temp[i]/2;
        sort(temp.begin(),temp.end());
        for(int j = 0; j < N; j++)
        {

            sum += temp[j];
            if(sum > B) break;
            else count++;
        }
        result = max(result, count);
        count = 0;
        sum = 0;

    }

    cout << result;
}