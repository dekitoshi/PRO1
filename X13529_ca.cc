#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    
    while (cin >> n) {
        bool found = false;
        vector<int> seq(n);
        for (int i = 0; i < n; i++) {
            cin >> seq[i];
        }

        int j;
        int k;
        for (j = 0; j < n; j++) {
            for (k = n - 1; k > j; k--) {
                if (seq[j] == seq[k] and !found) {
                    cout << seq[j] << ' ' << k << endl;
                    found = true;
                }
            }        
        }
        if (!found) cout << "NO" << endl;
    }
}