#include <iostream>
#include <vector>
using namespace std;

struct Line{
    int x1;
    int x2;
};

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    vector<Line> line(N);
    int count = 0;
    int result = 0;
    for(int i = 0; i < N; i++)
    {
        cin >> line[i].x1 >> line[i].x2;
    }

    for(int i = 0; i < N; i++)
    {
        count = 0;
        for(int j = 0;  j < N; j++)
        {
            if(i == j) continue;
            if(line[i].x1 < line[j].x1 && line[i].x2 > line[j].x2 || line[j].x1 < line[i].x1 && line[j].x2 > line[i].x2) break;
            else count++;
        }
        if(count == N-1) result++;
    }
    cout << result;
    return 0;
}