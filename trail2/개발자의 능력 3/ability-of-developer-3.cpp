#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include<climits>
using namespace std;


int get_diff(vector<int> abi,int i ,int  j, int z)
{
    int sum1 = abi[i] + abi[j] + abi[z];
    int sum2 = accumulate(abi.begin(), abi.end(),0) - sum1;
    return abs(sum2-sum1);

}

int main() {
    // Please write your code here.
    vector<int> abi(6);
    int min_result = INT_MAX;
    for(int i = 0; i < 6; i++)
    {
        cin >> abi[i];
    }

    for(int i =0 ; i < 6; i++)
    {
        for(int j =i+1; j < 6; j++)
        {
            for(int z= j+1; z <6; z++)
            {
                min_result= min(min_result, get_diff(abi,i,j,z));
            }
        }
    }
    cout << min_result;
    
    
    return 0;
}