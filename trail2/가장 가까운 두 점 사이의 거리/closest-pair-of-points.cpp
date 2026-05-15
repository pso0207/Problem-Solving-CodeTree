#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

struct Pos{
    int x;
    int y;
};

int main() {
    int N;
    cin >> N;
    vector<Pos> pos(N);
    int result = INT_MAX;
    for(int i = 0; i < N; i++)
    {
        cin >> pos[i].x >> pos[i].y;
    }

    for(int i =0 ; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            for(int z = j+1; z < N; z++)
            {
                if(j == i || z == i) continue;
                int diff_x = pos[j].x - pos[z].x;
                int diff_y = pos[j].y - pos[z].y;
                int dis = pow(diff_x,2) + pow(diff_y,2);
                result = min(result, dis); 
            }
        }
    }
    cout << result;
    return 0;
}