#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int abi[5];
    for(int i = 0; i < 5; i++)
    {
        cin >> abi[i];
    }
    int team1, team2, team3;
    int result = INT_MAX;
    
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            for(int z = 0;  z < 5; z++)
            {
                for(int k = 0; k < 5; k++)
                {
                    for(int m = 0; m <5; m++)
                    {
                        int max_team =INT_MIN;
                        int min_team =INT_MAX;
                
                        if(i == j || j ==z || i==z || i== k || i ==m ||j==k||j==m||z==k||z==m||k==m) continue;
                        team1 = abi[i] + abi[j];
                        team2 = abi[k] + abi[m];
                        team3 = abi[z];
                        if(team1 != team2 && team2 != team3 && team1 != team3)
                            {
                                max_team = max({team1, team2, team3});
                                min_team = min({team1, team2, team3});
                                result = min(result, abs(max_team-min_team));
                            }
                        }
                    }
            }
        }
    }
    if(result == INT_MAX) cout << -1;
    else cout << result;
    return 0;
}