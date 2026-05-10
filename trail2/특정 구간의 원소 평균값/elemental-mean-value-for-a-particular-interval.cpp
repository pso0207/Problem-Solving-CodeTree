#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin>> N;
    vector<int> num(N);
    int count = 0;
    double sum = 0;
    double avg = 0;
    for(int i = 0; i < N; ++i)
    {
        cin >>num[i];
    }



    for(int i = 0; i < N; ++i)
    {
        for(int j = i; j < N; ++j)
        {
            sum = 0;
            avg = 0;
            for(int k = i; k <= j; k++)
            {
                sum += num[k];
            }
            avg = sum / (j-i +1);
            for(int z = i; z <= j; z++)
            {
                if(num[z] == avg) 
                {
                    count++;
                    break;
                }
            }
        }
    }
    cout << count;
    return 0;
}