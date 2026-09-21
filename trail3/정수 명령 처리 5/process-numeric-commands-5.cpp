#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> v;

    for (int i = 0; i < N; i++) {
        string command;
        cin >> command;

        if (command == "push_back") {
            int num;
            cin >> num;
            v.push_back(num);
        }
        else if (command == "get") {
            int num;
            cin >> num;
            cout << v[num - 1] << '\n';
        }
        else if (command == "size") {
            cout << v.size() << '\n';
        }
        else if (command == "pop_back") {
            v.pop_back();
        }
    }

    return 0;
}