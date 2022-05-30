#include <iostream>
using namespace std;

void abs_xy (int& a) {
    if (a < 0) {
    a = a - 2*a;
    }
    return a;
}

int main() {
    int n;
    cin >> n;
    cout << abs_xy(n);
}