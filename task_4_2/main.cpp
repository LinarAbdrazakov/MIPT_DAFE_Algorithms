#include <iostream>
#include <cmath>

using namespace std;


int main() {
    int n;
    cin >> n;

    int* buffer = new int[2*n];
    int head = n;
    int tail = n - 1;
    for (int i = 0; i < 2 * n; i++) {
        buffer[i] = 0;
    }


    int a, b;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (a == 1) {
            buffer[head] = b;
            head++;
        } else if (a == 3) {
            buffer[tail] = b;
            tail--;
        } else if (a == 2) {
            int value;
            if(head == (tail + 1)) {
                value = -1;
            } else {
                value = buffer[head - 1];
                head--;
            }

            if(value != b) {
                cout << "NO";
                return 0;
            }
        } else {
            int value;
            if(head == (tail + 1)) {
                value = -1;
            } else {
                value = buffer[tail + 1];
                tail++;
            }

            if(value != b) {
                cout << "NO";
                return 0;
            }
        }

    }
    cout << "YES";

    return 0;
}
