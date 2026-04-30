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
    int max_dis = INT_MIN;
    int N;
    cin >> N;
    vector<Pos> pos;
    vector<int> dis;
    for(int i = 0; i < N; i++)
    {
        Pos temp;
        cin >> temp.x >> temp.y;
        pos.push_back(temp);
    }
    for(int i = 0; i < N-1; i++)
    {
        dis.push_back(abs(pos[i].x -pos[i+1].x) + abs(pos[i].y - pos[i+1].y));
    }
    int max_idx = max_element(dis.begin(),dis.end())-dis.begin();
    int result = 0;
    pos.erase(pos.begin()+ max_idx+1);
    for(int i = 0; i < pos.size()-1; i++)
    {
        result += abs(pos[i].x -pos[i+1].x) + abs(pos[i].y - pos[i+1].y);
    }
    
    cout << result;
    return 0;
}

