#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int N, C, G, H;
int get_work(int ta, int tb,int temp)
{
    if(ta > temp) return C;
    else if(temp >= ta && temp <= tb) return G;
    else if (temp > tb) return H;

}


int main() {
    cin >> N >> C>> G >> H;
    vector<int> Ta(N);
    vector<int> Tb(N);
    int count = 0;
    int result = 0;
    for(int i = 0; i < N; i++)
    {
        cin >> Ta[i] >> Tb[i];
    }

    for(int i = 0; i <= 1000;i++)
    {
        count = 0;
        for(int j = 0; j < N; j++)
        {
            count += get_work(Ta[j], Tb[j], i);
        }
        result = max(count, result);
    }
    cout << result;




    return 0;
}