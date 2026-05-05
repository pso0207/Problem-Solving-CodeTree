#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;
    int count = 0;
    for(int i = 0 ; i < str.size(); i++)
    {
        if(str[i] == '(')
        {
            if(str[i+1] == '(')
            {
                for(int j = i+2; j <str.size(); j++)
                {
                    if(str[j] == ')' && str[j+1] == ')') count++; 
                }
            }

        }
    }
            
    
    cout << count;
    return 0;
}