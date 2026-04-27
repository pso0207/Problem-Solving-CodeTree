#include <iostream>
#include <vector>
using namespace std;
bool is_odd(int a)
{
    if(a % 2 == 0) return false;
    else return true;
}

int main() {
    // Please write your code here.
    int a;
    cin >> a;
    int result = 0;
    int mul = 1;
    vector<int> temp;
    if(a == 1) 
    {
        cout << 0;
        return 0;
    }
    while(a != 0)
    {
        if(!is_odd(a)) temp.push_back(0);
        else temp.push_back(1);
        a /= 10;
    }
    int end = temp.size()-1;
    int start = 0;
    for(int i = 0; i < temp.size();i++)
    {
        if(temp[end] == 0 )
        { 
        temp[end] = 1;
        break;
        }
        if(temp[start] == 1)
        {
            temp[start] =0;
            break;
        }
        end--;
        start++;

    }
    
    for(int& i : temp)
    {
        result += i * mul;
        mul *=2;
    }
    
    cout << result;
}