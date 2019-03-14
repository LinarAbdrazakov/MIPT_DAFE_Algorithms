#include <iostream>

using namespace std;


int main() {
    int n;
    cin >> n;

    int num = 1;
    for (int i = 1; i <= n; i++) {
        cout << num << ' ';
        num = num + i + i + 1;
    }
    return 0;
}
