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
    int result = 0;
    for(int i =0; i < N; i++)
    {
        cin >> line[i].x1 >> line[i].x2;
    }
    
    for(int i =0; i < N; i++)
    {
        for(int j = i+1; j < N; j++)
        {
            for(int z = j+1; z< N; z++)
            {
                int area_count[101] = {0};
                bool area = false;
                for(int k = 0; k < N; k++)
                {
                    if(k == i || k == j || k == z) continue;
                    for(int l = line[k].x1; l <= line[k].x2; l++)
                    {
                        area_count[l]++;
                    }
                }
                for(int k = 0; k < 101; k++)
                {
                    if(area_count[k] >= 2) area =true;
                }
                if(area == false) result++;
            }
        }
    }
    cout << result;


    return 0;
}