#include <iostream>
#include <cmath>

using namespace std;


int main() {
    int n;
    cin >> n;

    int A[n + 2];
    for (int i = 1; i < n + 1; i++) {
        cin >> A[i];
    }
    A[0] = A[1] - 1;
    A[n + 1] = A[n] - 1;

    int left = 1;
    int right = n;

    while (left < right) {
        int median = (left + right) / 2;
        if(A[median] < A[median + 1]) {
            left = median + 1;
        } else if (A[median - 1] > A[median]) {
            right = median - 1;
        } else {
            left = median;
            right = median;
        }
    }

    cout << left - 1;

    return 0;
}
