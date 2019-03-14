#include <iostream>

using namespace std;


int main() {
    int n_A;
    cin >> n_A;
    int array_A[n_A];
    for (int i = 0; i < n_A; i++) {
        cin >> array_A[i];
    }

    int n_B;
    cin >> n_B;
    int array_B[n_B];
    for (int i = 0; i < n_B; i++) {
        cin >> array_B[i];
    }

    int k;
    cin >> k;

    int acc = 0;
    int index_A = 0;
    int index_B = n_B - 1;
    while (true) {
        if(index_A == n_A || index_B == -1) break;

        if ((array_A[index_A] + array_B[index_B]) > k) {
            index_B--;
        } else if ((array_A[index_A] + array_B[index_B]) < k) {
            index_A++;
        } else {
            acc++;
            index_A++;
        }
    }

    cout << acc;

    return 0;
}
