#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char win = ' ';
    int N;
    cin >> N;
    int A = 0;
    int B = 0;
    int count = 0;
    for(int i = 0; i < N; i++){
        char inp = ' ';
        int inp_num = 0;
        cin >> inp >> inp_num;
        if(inp == 'A') A += inp_num;
        else B += inp_num; 

        if(win == ' ' && A < B){
            win = 'B';
            count++;
        } 
        else if(win == ' ' && A > B){
            win = 'A';
            count++;
        }
        else if(win == 'A' && A < B){
            win = 'B';
            count++;
        }
        else if(win == 'B' && A > B){
            win = 'A';
            count++;
        }
        else if(A == B && win != ' '){
            win = ' ';
            count++;
        }
    }
    cout << count;
    return 0;
}