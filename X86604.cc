#include <iostream>
using namespace std;

bool es_vocal(char c) {
    return c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u';
}

void consonantes_vocales() {
    char c;
    if (cin >> c) {
		bool vocal = es_vocal(c);
        if (not vocal) cout << c;
		consonantes_vocales(); 
		if (vocal) cout << c;
	}
}

int main() {
    consonantes_vocales();
    cout << endl;
}