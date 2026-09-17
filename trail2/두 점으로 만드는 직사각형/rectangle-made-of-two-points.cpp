#include <iostream>
using namespace std;



int main() {
    int x1,x2,y1,y2,a1,a2,b1,b2;
    cin >> x1 >> y1 >> x2 >> y2 >> a1 >> b1 >> a2 >> b2;

    int min_x =  x1 > a1 ? a1 : x1;
    int min_y = y1 > b1 ? b1 : y1;
    int max_x = x2 > a2 ? x2 : a2;
    int max_y = y2 > b2 ? y2 : b2;

    cout << (max_x - min_x) * (max_y - min_y);
    return 0;
}