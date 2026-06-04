#include <iostream>
#include <vector>
#include <set>
using namespace std;
struct Pos{
    int x;
    int y;
};

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    vector<Pos> pos(N);
    bool result = false;
    for(int i = 0; i < N; i++)
    {
        cin >> pos[i].x >> pos[i].y;
    }

    
    for(int i = 0; i  <= 10; i++) //xxx
    {
        for(int j = 0; j <= 10; j++)
        {
            for(int z = 0; z <= 10; z++)
            {
            bool check = true;
                for(int a = 0; a < N; a++)
                {
                    if(pos[a].x == z || pos[a].x == j || pos[a].x == i){
                        continue;
                    }
                    else{
                        check = false;
                        break;
                    } 
                }
                if (check ==true){
                    cout << 1;
                    return 0;
                }
             }
    }
    }
    for(int i = 0; i  <= 10; i++) //xxy
    {
        for(int j = 0; j <= 10; j++)
        {
            for(int z = 0; z <= 10; z++){
                bool check = true;
                for(int a = 0; a < N; a++)
                {
                    if(pos[a].y == z || pos[a].x == j || pos[a].x == i){
                        continue;
                    }
                    else{
                        check = false;
                        break;
                    } 
                }
                if (check ==true){
                    cout << 1;
                    return 0;
                }
            }
        }
    }
    for(int i = 0; i  <= 10; i++) //xxy
    {
        for(int j = 0; j <= 10; j++)
        {
            for(int z = 0; z <= 10; z++){
                bool check = true;
                for(int a = 0; a < N; a++)
                {
                    if(pos[a].y == z || pos[a].y == j || pos[a].x == i){
                        continue;
                    }
                    else{
                        check = false;
                        break;
                    } 
                }
                if (check ==true){
                    cout << 1;
                    return 0;
                }
            }
        }
    }
    for(int i = 0; i  <= 10; i++) //xxy
    {
        for(int j = 0; j <= 10; j++)
        {
            for(int z = 0; z <= 10; z++){
                bool check = true;
                for(int a = 0; a < N; a++)
                {
                    if(pos[a].y == z || pos[a].y == j || pos[a].y == i){
                        continue;
                    }
                    else{
                        check = false;
                        break;
                    } 
                }
                if (check ==true){
                    cout << 1;
                    return 0;
                }
            }
        }
    }
    cout << 0;

    return 0;
}