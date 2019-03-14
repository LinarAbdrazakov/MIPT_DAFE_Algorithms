#include <iostream>
#include <cmath>
#include <vector>


using namespace std;


int main() {
    int n = 800000;

    char* line = new char[3 * n];
    char* clone = new char[n];
    char* head = line + n;
    char* tail = line + n;

    char sym;
    while (cin >> sym) {
        if(sym != '\n') {
            *tail = sym;
            tail++;
        }
    }




    return 0;
}
