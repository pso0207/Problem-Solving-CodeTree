#include <iostream>
#include <vector>
#include <climits>
using namespace std;

struct Pos{
    char c;
    int x;
};

int main() {
    int T, a, b;
    int result = 0;
    cin >> T >> a >> b;
    vector<Pos> pos(T);
    int count_S[1001] ={0};
    int count_N[1001] ={0};
    for(int i =0; i < T;i++)
    {
        cin >> pos[i].c >> pos[i].x;
        if(pos[i].c =='S') count_S[pos[i].x]++;
        else count_N[pos[i].x]++;
    }

    for(int i = a; i <= b;i++)
    {
        int d1 =INT_MAX;
        int d2 =INT_MAX;
        for(int j = 1; j < 1001; j++)
        {
            if(count_S[j] == 1) d1 = min(d1, abs(i-j));
            else if(count_N[j] ==1) d2 = min(d2, abs(i-j)); 
        }
        if(d1 <= d2) result++;
    }
    cout << result;


    return 0;
}