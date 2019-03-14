#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    double x;
    double y;
};

double get_length(Point a, Point b) {
    double length = pow((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y), 0.5);
    return length;
}

double get_area(Point a, Point b, Point c) {
    double length_1 = get_length(a, b);
    double length_2 = get_length(a, c);
    double length_3 = get_length(c, b);
    double p = (length_1 + length_2 + length_3) / 2;

    return pow(p * (p-length_1) * (p-length_2) * (p-length_3), 0.5);
}

int main() {
    int N;
    cin >> N;

    Point points[N];
    for (int i = 0; i < N; i++) {
        cin >> points[i].x >> points[i].y;
    }

    double area = 0;

    for (int i = 1; i <= N - 2; i++) {
        area += get_area(points[0], points[i], points[i+1]);
    }

    cout << area;

    return 0;
}
