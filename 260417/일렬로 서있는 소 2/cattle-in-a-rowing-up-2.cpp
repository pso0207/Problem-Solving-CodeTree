#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    vector<int> num(N,0);
    int count = 0;
    for(int i = 0;  i < N; i++)
    {
        cin >> num[i];
    }

    for(int i = 0; i < N; i++)
    {
        for(int j = i+1; j < N; j++){
            for(int z = j+1; z <N; z++){
                if(num[z] >= num[j] && num[j] >= num[i]) count++;
            }
        }   
    }
    cout << count;
    return 0;
}