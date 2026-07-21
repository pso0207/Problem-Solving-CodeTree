#include <iostream>
#include <string>
using namespace std;

int N;
int min_dist(string seat){
    int temp = 0;
    int dis = 1000;
    for(int i =1; i < N; i++){
        if(seat[i] == '1'){
            dis = min(dis, (i - temp));
            temp = i;
        }
    }
    return dis;
}

int main() {
    // Please write your code here.
    cin >> N;
    int result = 0;
    string seat;
    cin >> seat;
    for(int i = 0; i < N; i++){
        if(seat[i] == '1') continue;
        else{
            seat[i] = '1';
            result = max(min_dist(seat), result);
            seat[i] = '0';
        }
    }
    cout << result;
    return 0;
}