#include <iostream>
#include <cmath>

using namespace std;


int main() {
    int N;
    cin >> N;

    int a = 0;
    for (int i = 2; i <= pow(N, 0.5); i++) {
        if (N % i == 0) {
            a = i;
            break;
        }
    }

    if (a == 0) {
        cout << 1 << ' ' << N - 1;
    } else {
        cout << N / a << ' ' << N - N / a;
    }

    return 0;
}
