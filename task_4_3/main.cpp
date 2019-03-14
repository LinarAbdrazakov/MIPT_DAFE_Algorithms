#include <iostream>
#include <cmath>
#include <vector>


using namespace std;


int main() {
    int n;
    cin >> n;

    vector <int> a;
    vector <int> b;

    int cmd, val;
    for (int i = 0; i < n; i++) {
        cin >> cmd >> val;
        if(cmd == 3) {
            a.push_back(val);
        } else {
            if (b.empty()) {
                for (int j = a.size() - 1; j >= 0; j--) {
                    b.push_back(a[j]);
                }
                a.clear();
            }

            int result;
            if (b.empty()) {
                result = -1;
            } else {
                result = b[b.size() - 1];
                b.pop_back();
            }

            if (result != val) {
                cout << "NO";
                return 0;
            }

        }
    }
    cout << "YES";
    return 0;
}
