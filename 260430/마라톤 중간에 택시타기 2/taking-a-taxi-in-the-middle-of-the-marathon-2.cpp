#include <iostream>
#include <climits>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;


struct Pos{
    int x;
    int y;
};
int main() {
    // Please write your code here.
    int max_dis = INT_MAX;
    int result = 0;
    int N;
    cin >> N;
    vector<Pos> pos;
    for(int i = 0; i < N; i++)
    {
        Pos temp;
        cin >> temp.x >> temp.y;
        pos.push_back(temp);
    }
    for(int i =1 ; i < N-1; i++)
    {
        result =0;
        Pos temp = pos[i];
        pos.erase(pos.begin()+ i);
        for(int j = 0; j < N-2; j++)
        {
            result += (abs(pos[j].x - pos[j+1].x) + abs(pos[j].y - pos[j+1].y));
        }
    
        pos.insert(pos.begin() + i,temp);
        max_dis = min(result, max_dis);
    }
    cout << max_dis;

}

