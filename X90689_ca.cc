#include <iostream>
using namespace std;

// Pre: a > 0 and b > 0
// Post: returns true when  pair (a, b) is three-sorted
//      returns false otherwise
bool is_three_sorted(int a, int b) {
    int ac = 0, bc = 0;
    while (a % 3 == 0) {
        a /= 3;
        ac++;
    }
    while (b % 3 == 0) {
        b /= 3;
        bc++;
    }
    if (ac >= bc) return true;
    else return false;
}

int main() {
    int a, b;

    while (cin >> a >> b) {
        if (is_three_sorted(a, b)) cout << "yes";
        else cout << "no";
        cout << endl;
    }

}