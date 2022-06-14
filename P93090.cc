#include <iostream>
using namespace std;


struct Fraccio {
    int num, den;
    };

int maximo_comun_divisor (int a, int b) {
    if (b == 0) return a;
    return maximo_comun_divisor(b, a % b);
}

Fraccio suma(const Fraccio& x, const Fraccio& y) {
    Fraccio sum;
    sum.num = x.num*y.den + y.num*x.den;
    sum.den = x.den*y.den;
    return sum;
}

int main() {
    Fraccio x, y;
    y.num = 0;
    y.den = 1; 
    char bar, op = '+';

    while (op != '=') {
        cin >> x.num >> bar >> x.den >> op;
        y = suma(x, y);
        int m = maximo_comun_divisor(y.num, y.den);

        y.num /= m;
        y.den /= m;

    }

    cout << y.num << '/' << y.den << endl;

}