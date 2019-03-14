#include <iostream>
#include <cmath>

using namespace std;


int main() {
    int n, m;
    cin >> n >> m;

    int A[n];
    int B[m];

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }

    for (int i = 0; i < m; i++) {
        int num = B[i];

        int left = 0;
        int right = n - 1;

        while (left < right) {
            int median = (left + right) / 2;
            if(num > A[median]) {
                left = median + 1;
            } else if (num < A[median]) {
                right = median;
            } else {
                left = median;
                right = median;
            }

        }
        if (A[left] < num) cout << n << ' ';
        else cout << left << ' ';
    }

    return 0;
}
