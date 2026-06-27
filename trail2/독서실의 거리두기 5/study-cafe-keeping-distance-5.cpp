#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    vector<int> result_arr;
    string seat;
    cin >> seat;
    for(int i = 0; i < seat.size(); i++)
    {
        string temp_seat = seat;
        int result = INT_MAX;
        if(temp_seat[i] != '1') temp_seat[i] = '1';
        else continue;
        for(int j = 0; j < seat.size(); j++){
            int gap = 0;
            if(temp_seat[j] == '1')
            {
                for(int z =j+1 ; z < seat.size(); z++){
                    if(temp_seat[z] == '1') 
                    {
                        gap = z - j;
                        result = min(result, gap);
                        break;
                    }
                }
            }
        }
        result_arr.push_back(result);
    }
    cout << *max_element(result_arr.begin(),result_arr.end());
    return 0;
}