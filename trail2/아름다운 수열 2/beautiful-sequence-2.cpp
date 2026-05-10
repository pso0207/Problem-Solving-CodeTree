#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    // Please write your code here.
    int N; 
    int M;
    cin >> N >> M;
    bool count = 0;
    int result= 0;
    unordered_map<int, int> count_B;
    unordered_map<int, int> temp_B;
    vector<int> A(N);
    vector<int> B(M);
    for(int i = 0; i < N; ++i)
    {
        cin >>A[i];
    }
    for(int i = 0; i < M; ++i)
    {
        cin >>B[i];
        count_B[B[i]]++;
    }
    


    for(int i = 0; i < N; i++)
    {
        temp_B = count_B;
        for(int j =i; j <= i+M  && j < N; j++)
        {
            count = false;
            for(int z = 0; z <M; z++)
            {
                
                if(A[j] == B[z])
                {
                    if(temp_B[B[z]] > 0) 
                    {
                        temp_B[B[z]] --;
                        count = true;
                        break;
                    }
                }
            }

            if(!count) break;
        }
    for (auto it = temp_B.begin(); it != temp_B.end(); ) {
        if (it->second == 0) {
            it = temp_B.erase(it); 
        } else {
            ++it;
        }
    }
    if(temp_B.empty()) result++;

    }
    cout << result;
    return 0;
}