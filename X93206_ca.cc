#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

    int n;

    while (cin >> n) {

        vector<string> V(n);

        for (int i = 0; i < n; i++) {
            cin >> V[i];
        }

        for (int i = 0; i < n; i++) {
                for (int j = 1; j < n; j++) {
                    if(V[i] == V[j+i]) V[j+i] = "null";
                }
        }

        for (int i = 0; i < n; i++) {
            if (V[i] != "null") cout << V[i] << endl;
        }
        cout << endl;
    }
}