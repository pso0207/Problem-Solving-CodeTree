#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    int result = 0;
    vector<int> B(N);
    vector<int> count1(N);
    vector<int> count2(N);

    for(int i = 0; i < N; i++)
    {
        cin >> B[i] >> count1[i] >> count2[i];
    }

    for(int i = 1; i <=9 ; i++)
    {
        for(int j = 1 ; j <= 9; j++)
        {
            for(int z = 1; z <= 9; z++)
            {
                if(i==j || j==z || i==z) continue;
                else{
                    for(int k =0 ; k < N; k++)
                    {
                        int temp_count1 = 0;
                        int temp_count2 = 0;
                        int d100, d10, d1;
                        d100 = B[k] / 100;
                        d10 = (B[k]/10) %10;
                        d1 = B[k] % 10;
                        if(d100 == i) temp_count1++;
                        if(d10 == j) temp_count1++;
                        if(d1  == z)  temp_count1++;

                        if(d100 == j || d100 == z) temp_count2++;
                        if(d10 == i || d10 == z) temp_count2++;
                        if(d1 == i || d1 ==j) temp_count2++;

                        if(count1[k] == temp_count1 && count2[k] == temp_count2){
                            if(k == N-1) result++;
                        }
                        else break;
                    }
                }
            }
        }
    }
    cout << result;
    return 0;
}