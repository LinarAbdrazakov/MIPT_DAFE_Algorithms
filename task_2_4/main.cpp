#include <iostream>

using namespace std;


int main() {
    int N, k;
    cin >> N >> k;

    int persons[N];
    for (int i = 0; i < N; i++) {
        persons[i] = 1;
    }

    int acc = 0;
    int ends = 0;
    while ((N - ends) > 1) {
        for (int i = 0; i < N; i++) {
            acc += persons[i];
            if (acc == k) {
                acc = 0;
                persons[i] = 0;
                ends += 1;
            }
        }
    }

    int id = 0;
    for (int i = 0; i < N; i++) {
        if (persons[i] == 1) {
            id = i + 1;
            break;
        }
    }

    cout << id;

    return 0;
}
