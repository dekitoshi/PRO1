#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int total = 0;
    for (int i = 0; i < n; i++) {
        int parcial = 0;
        int m, a, b;
        cin >> m >> a >> b;
        for (int j = 2; j < m; i++) {
            int c;
            cin >> c;
            if (b == a + c) parcial++;
            a = b;
            b = c;
        }
        cout << parcial << endl;
        total += parcial;
    }
    cout  << "Total: " << total << endl;
}