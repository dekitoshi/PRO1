#include <iostream>
using namespace std;

int main() {
    int n = 6;
    int counter = 0;
    for (int i = 0; i < 10000; i++) {
        if (i % n == 0 and i % 15 == 9 and i % 17 == 7) counter++;
    }
    cout << counter << endl;
}