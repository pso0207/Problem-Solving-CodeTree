#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    bool lock = false;
    string str;
    stack<char> s;
    cin >> str;
    int count = 0;
    for(int i = 0; i < str.size(); i++)
    {
        if(lock == false && str[i] == '(') 
        {
            s.push(str[i]);
            lock = true;
        }
        for(int j = i+1; j <str.size(); j++)
        {
            if(lock == true && str[j] == ')') count++;
        }
        while(!s.empty())
        {
            s.pop();
        }
        lock = false;
    }
    cout << count;
    return 0;
}