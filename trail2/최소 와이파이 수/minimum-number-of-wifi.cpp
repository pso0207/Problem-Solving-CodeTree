#include <iostream>
#include <vector>
#include <climits>
using namespace std;



int main() {
    int n, m;
    int count = 0;
    cin >> n >> m;
    int cover_max = INT_MIN;
    int cover_min = INT_MAX;
    vector<int> a(n);
    for(int i =0 ; i < n; i++){
        cin >> a[i];
    }
    for(int i =0; i < n ;i++){
        
        if(a[i] ==1 && (i > cover_max || i < cover_min)){
            count++;
            cover_max = i + 2 * m;
            cover_min = i;
        }

    }
    cout << count;
    return 0;
}