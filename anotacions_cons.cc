#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string nom_equip, max_eq;
    int max_cons = 0;

    while (cin >> nom_equip) {

        int a,b;
        int jor_cons = 0;
        cin >> a >> b;

        for (int i = 2; i < n; i++) {
            int c;
            cin >> c;
            if (c >= a and c >= b) jor_cons++;
            a = b;
            b = c;
        }

        cout << nom_equip << ": " << jor_cons << endl;

        if (max_cons < jor_cons) {
            max_cons = jor_cons;
            max_eq = nom_equip;
        }
        else if (max_cons == jor_cons) {
            if (max_eq <= nom_equip) {
                max_eq = nom_equip;
                max_cons = jor_cons;
            }
        }
    }
    cout << "----------" << endl;
    cout << max_eq << ": " << max_cons << endl;
}