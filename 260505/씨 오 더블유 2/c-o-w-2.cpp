#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    string str;
    cin >> str;
    int count = 0;
    for(int i = 0;  i < N; i++)
    {
        if(str[i] == 'C')
        {
            for(int j = i+1; j < N; j++)
            {
                if(str[j] == 'O')
                {
                    for(int z = j+1; z < N; z++)
                    {
                        if(str[z] == 'W') count++;
                    }
                }
            }
        }
    }
    cout << count;
    return 0;
}