#include <iostream>
#include <climits>
#include <map>
using namespace std;
#define MAX_N 102



int main() {
    // Please write your code here.
    int N;
    int K;
    cin >> N >> K;
    int basket[MAX_N] = {0};
    int sum = 0;
    int result = 0;
    for(int i = 0; i < N; i++)
    {
        int x =0;
        int y =0;
        cin >> x >> y;
        if(basket[y] != 0) basket[y] += x;
        else basket[y] = x;
    }
    if(K > 50)
    {
        for(int i =0 ; i <= 100; i++)
        {
            result+= basket[i];
        }
    }
    else{
    for(int i = 0; i <= 100 - 2 * K; i++) 
    {
        sum =0;
        for(int j = i; j <= i + 2 * K ; j++) 
        {
            if(j > 101 && j <0) continue;
            sum += basket[j];
        }
        result = max(result, sum);
    }
    }
    cout << result;
    

    return 0;
}