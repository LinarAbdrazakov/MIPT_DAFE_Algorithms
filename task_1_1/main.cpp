#include <iostream>

using namespace std;


int main() {
    int N, acc = 0;
    cin >> N;
    for (int i = 5; i <= N; i++) {
        int num = i;
        while (num % 5 == 0) {
            num /= 5;
            acc += 1;
        }
    }
    cout << acc;
    return 0;
}
