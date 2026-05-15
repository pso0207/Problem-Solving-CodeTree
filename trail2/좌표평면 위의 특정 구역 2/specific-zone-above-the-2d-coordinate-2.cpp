#include <iostream>
#include <vector>
#include <climits>
using namespace std;

struct Pos{
    int x;
    int y;
};
int main() {
    // Please write your code here.
    int N;
    cin >> N;
    int result = INT_MAX;
    vector<Pos> pos(N);
    for(int i = 0; i < N; i++)
    {
        cin >> pos[i].x >> pos[i].y;
    }


    for(int i= 0 ; i < N; i++)
    {
        int min_x, max_x ;
        int min_y, max_y;
        min_x = min_y = INT_MAX;
        max_x = max_y = INT_MIN;
        for(int j = 0; j < N; j++)
        {
            if(i == j) continue;
            
            min_x = min(pos[j].x, min_x);
            min_y = min(pos[j].y, min_y);
            max_x = max(pos[j].x, max_x);
            max_y = max(pos[j].y, max_y);
        }
        int area = (max_x - min_x) * (max_y -min_y);
        result = min(result, area);
    }
    cout << result;

    return 0;
}