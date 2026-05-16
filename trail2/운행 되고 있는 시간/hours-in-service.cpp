#include <iostream>
#include <vector>
#include <climits>
using namespace std;

struct Time{
    int start;
    int end;
};

int main() {
    int N;
    int result = INT_MIN;
    int count = 0;
    cin >> N;
    vector<Time> time(N);
    bool time_table[1001] = {false};
    for(int i = 0; i < N; i++)
    {
        cin >> time[i].start >> time[i].end;
    }
    

    for(int i =0; i < N; i++)
    {
        count = 0;
        for(int j = 0; j < N; j++)
        {
            if(i == j) continue;
            for(int z = 1; z <= 1000; z++)
            {
                if(time[j].start <= z && time[j].end > z) time_table[z] = true;
            }
        }
        for(int j = 1;  j <= 1000; j++)
        {
            if(time_table[j] == true) count++;
            time_table[j] = false;
        }
        result = max(result,count);
    }
    cout << result;
    return 0;
}