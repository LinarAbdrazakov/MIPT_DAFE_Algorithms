#include <iostream>
#include <cmath>

using namespace std;

int search(const int* array, int size, int el) {
    int left = 0;
    int right = size - 1;
    while (right - left > 1) {
        int median = (right + left) / 2;
        if(el > array[median]) {
            left = median;
        } else {
            right = median;
        }
    }
    return (abs(array[left] - el) <= abs(array[right] - el)) ? left : right;
}

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
        cout << search(A, n, B[i]) << ' ';
    }

    return 0;
}
