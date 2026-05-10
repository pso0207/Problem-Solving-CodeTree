#include <iostream>
using namespace std;
#define MAX_N 101

int main() {
    // Please write your code here.
    int  N;
    int G, H;
    int result = 0;
    cin >> N;
    char arr[MAX_N] = {0};
    for(int i = 0; i < N; i++)
    {
        int x;
        char ch;
        cin >> x >> ch;
        arr[x] = ch;
    }
    for(int i =0 ; i < MAX_N; i++)
    {
        G = H = 0;
        for(int j =i; j < MAX_N; j++)
        {
            if(arr[j] == 'G') G++;
            else if(arr[j] =='H') H++;

            if((arr[j] != 0 && arr[i]!=0) &&G!= 0 && G == H) result = max(result, j-i);
            if((arr[j] != 0 && arr[i]!=0) &&G!= 0 && H==0) result = max(result, j-i);
            if((arr[j] != 0 && arr[i]!=0) &&H!= 0 && G == 0) result = max(result, j-i);
            
        }
        
    }
    cout << result;
    return 0;
}