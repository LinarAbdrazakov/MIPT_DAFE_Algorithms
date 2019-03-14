#include <iostream>
#include <cmath>

using namespace std;


int main() {
    int n;
    cin >> n;

    int* buffer = new int[n];
    int head = 0;
    int tail = 0;
    for (int i = 0; i < n; i++) {
        buffer[i] = 0;
    }


    int a, b;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (a == 3) {
            buffer[head] = b;
            head++;
        } else {
            int value;
            if(head == tail) {
                value = -1;
            } else {
                value = buffer[tail];
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
