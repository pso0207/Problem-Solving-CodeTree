#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.
    int N, H, T;
    cin >> N >> H >>T;
    vector<int> arr(N);
    vector<int> num(N);
    int cost = 0;
    int count = 0;
    int result = INT_MAX;
    for(int i =0; i < N; i++)
    {
        cin>> arr[i];
    }
    for(int i = 0; i < N; i++)
    {
        for(int j =i; j <N; j++)
        {
            num = arr;
            cost = 0;
            count = 0;
            for(int k =i; k<= j; k++)
            {
                if(num[k] == H) count++;
                else
                {
                    while(num[k] != H)
                    {
                        if(num[k] > H) 
                        {
                            num[k]--;
                            cost++;
                        }
                        else{
                            num[k]++;
                            cost++;
                        }
                    }
                    count++;
                }
            }

            if(count == T) result = min(result, cost);
        }
    }
    cout << result;
    return 0;
}