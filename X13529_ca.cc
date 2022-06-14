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
            for (k = 0; k < )
            if (seq[j] == seq[n-j-1] and !found) found = true;        
        }
        if (found) cout << j << ' ' << n-j-1 << endl;
        else cout << "NO" << endl;
    }
}