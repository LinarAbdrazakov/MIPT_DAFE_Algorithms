#include <iostream>

using namespace std;


int get_nod(int a, int b) {
    while (a != 0 && b!= 0) {
        if (a > b) a %= b;
        else b %= a;
    }
    return a + b;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int res_a = a * d + b * c;
    int res_b = b * d;


    // find nod
    int nod = get_nod(res_a, res_b);

    res_a /= nod;
    res_b /= nod;

    cout << res_a << ' ' << res_b;

    return 0;
}

