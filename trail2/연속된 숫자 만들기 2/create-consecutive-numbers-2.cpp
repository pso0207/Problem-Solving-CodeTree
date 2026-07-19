#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    vector<int> num(3);
    int result = 0;
    for(int i = 0; i < 3; i++)
    {
        cin >> num[i];
    }
    vector<int> sorted_num = num;
    sort(sorted_num.begin(), sorted_num.end());
    if(((sorted_num[1] - sorted_num[0]) ==1) && ((sorted_num[2] - sorted_num[1]) ==1)) result = 0;
    else if(abs(num[2] -num[1]) == 2) result = 1;
    else if (abs(num[1] - num[0]) == 2) result = 1;
    else result = 2;
    cout << result;
    return 0;
}