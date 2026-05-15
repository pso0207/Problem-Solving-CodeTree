#include <iostream>
#include <climits>
#include <vector>
using namespace std;

struct Pos{
    int x;
    int y;
};

int main() {
    int N;
    cin >> N;
    vector<Pos> pos(N);
    int result =INT_MIN;
    
    for(int i = 0; i < N; i++)
    {
        cin >> pos[i].x >> pos[i].y;
    }
    
    int diff_x = INT_MIN;
    int diff_y = INT_MIN;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            for(int z = 0; z < N; z++)
            {
                if(i == j || i == z || j == z) continue;
                
                if(pos[i].x == pos[j].x && pos[i].y == pos[z].y) 
                {
                    diff_y = abs(pos[i].y - pos[j].y);
                    diff_x = abs(pos[i].x - pos[z].x);
                    result = max(result, diff_x * diff_y);
                }
                

             }
        }
    }
    cout <<result;
    return 0;
}