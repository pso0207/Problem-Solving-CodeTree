#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int x1,x2,x3,x4;
    cin >> x1 >> x2 >> x3 >> x4;
    if(x4 < x1 || x2 < x3) cout << "nonintersecting";
    else cout << "intersecting";
    return 0;
}