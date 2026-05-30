#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int N;
    int answer = INT_MIN;
    cin >> N;
    vector<int> H(N);
    for(int i =0; i < N; i++)
    {
        cin >> H[i];
    }

    for(int i = 1; i < 1000; i++) // Height
    {
        int height_count = 0;
        vector<bool> mark_H(N+1,false);
        for(int j = 0; j < N; j++)
        {
            if(H[j] - i > 0) mark_H[j] = true;
        }
        for(int j = 0; j < N; j++)
        {
            if(mark_H[j] == true && mark_H[j+1]== true) continue;
            else if(mark_H[j] == true)  height_count++;
        }
        answer = max(answer, height_count);

    }
    cout << answer;
    return 0;
}