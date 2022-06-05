#include <iostream>
#include <vector>
using namespace std;

struct Racional {
    int num, den;
};

int maximo_comun_divisor (int a, int b) {
    if (b == 0) return a;
    return maximo_comun_divisor(b, a % b);
}

Racional racional (int n, int d) {
    Racional rac_nd;
    if (n == 0) {
        rac_nd.num = 0;
        rac_nd.den = 1;
        return rac_nd;
    }

    else {
        int m = maximo_comun_divisor (n, d);
        rac_nd.num = n/m;
        rac_nd.den = d/m;
        if ((rac_nd.den < 0 and rac_nd.num > 0) or (rac_nd.den < 0 and rac_nd.num < 0)) {
            rac_nd.num = rac_nd.num - 2*rac_nd.num;
            rac_nd.den = rac_nd.den - 2*rac_nd.den;
        }
        return rac_nd;
    }
}
