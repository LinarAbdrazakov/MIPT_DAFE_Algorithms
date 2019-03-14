#include <iostream>
#include <cmath>

using namespace std;


int main() {
    int N;
    cin >> N;
    for (int i = 2; i <= int(pow(N, 0.5) + 1); i++) {
       while (N % i == 0) {
           cout << i << ' ';
           N /= i;
       }
    }
    if (N != 1) cout << N;
    return 0;
}
