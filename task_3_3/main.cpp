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

    int m;
    cin >> m;
    int B[m];
    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }


    for (int i = 0; i < m; i++) {
        int value = B[i];

        int left = 0;
        int right = n - 1;
        while (left < right) {
            int median = (left + right) / 2;
            if (median == 0) {
                left = 0;
                right = 0;
            } else if (value > A[median + 1]) {
                left = median + 1;
            } else if (value < A[median - 1]) {
                right = median - 1;
            } else {
                if (abs(A[median - 1] - value) <= abs(A[median] - value)) {
                    left = median - 1;
                    right = median - 1;
                } else if (abs(A[median] - value) <= abs(A[median + 1] - value)) {
                    left = median;
                    right = median;
                } else {
                    left = median + 1;
                    right = median + 1;
                }
            }
        }
        cout << left << ' ';
    }

    return 0;
}
