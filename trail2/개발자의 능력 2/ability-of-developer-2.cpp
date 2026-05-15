#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
//3번째 팀원의 합은 1,2번쨰를 전체 팀원 합에서 뺸

int total_sum;
int abi[6];
int diff(int i, int  j, int k, int z)
{   
    int team1 = abi[i] +abi[j];
    int team2 = abi[k] +abi[z];
    int team3= total_sum - team1 -team2;

    return max({team1,team2,team3}) - min({team1,team2,team3});

}

int main() {
    // Please write your code here.
    int result = INT_MAX;
    for(int i =0; i < 6; i++)
    {
        cin >> abi[i];
        total_sum += abi[i];
    }


    for(int i=0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            for(int z = 0; z < 6; z++)
            {
                for(int k= 0; k < 6; k++)
                {
                    if(i != j && i != z && i != k && j !=z && j !=k && z !=k) result = min(result, diff(i,j,z,k));
                }
            }
        }
    }
    cout <<result;
    return 0;
}