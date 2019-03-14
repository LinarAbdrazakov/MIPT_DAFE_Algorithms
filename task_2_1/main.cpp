#include <iostream>
#include <cmath>

using namespace std;


int main() {
    int n;
    cin >> n;

    int A[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    int B[n];
    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }

    int max_sum = A[0] + B[0];
    int max_i = 0, max_j = 0;
    int max_real_i = 0;

    for (int i = 1; i < n; i++) {
        if (A[i] > A[max_real_i]) {
            max_real_i = i;
        }
        if (A[max_real_i] + B[i] > max_sum) {
            max_sum = A[max_real_i] + B[i];
            max_j = i;
            max_i = max_real_i;
        }
    }

    cout << max_i << ' ' << max_j;

    return 0;
}
