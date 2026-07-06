#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    int cnt = 0;
    cin >> N;
    vector<int> bi_num(11,-1);
    for(int i = 0; i < N; i++)
    {
        int temp = 0;
        int location;
        cin >> temp >> location;
        if(bi_num[temp] == -1) bi_num[temp] = location;
        else if(bi_num[temp] != location){
            cnt++;
            bi_num[temp] = location;
        }
    }
    cout << cnt;
    return 0;
}