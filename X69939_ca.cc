#include <iostream>
using namespace std;

int time_lapse(int time_1, int time_2) {
    if (time_2 - time_1 > 0) return time_2 - time_1;
    else return 60 + (time_2 - time_1);
}

int main() {
    int a, b, c;
    bool no_fetch = false;
    cin >> a >> b >> c;
    int f = time_lapse(a, b);
    
    while  (!no_fetch and c != -1) {
        if (f == time_lapse(b, c)) {
            a = b;
            b = c;
            f = time_lapse(a, b);
        } else no_fetch = true;

        cin >> c;
    }

    if (no_fetch) cout << 0 << endl;
    else cout << f << endl;  
}