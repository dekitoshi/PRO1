#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> row;
typedef vector<row> matrix; 

void matrix_input(int n, int m, matrix& mat) {
    for(int i=0; i < n; i++) {
		for(int j=0; j < m; j++) {
			cin >> mat[i][j];
		}
    }
}

void matrix_output(string s, int n, int m, const matrix& mat) {
	int x,y;

	if (s == "fila") {
		cin >> x;
		cout << "fila " << x << ": ";
		for(int i=0; i < m; i++) {
			cout << mat[x-1][i];
			if (i == m-1) cout << endl;
			else cout << ' ';
		}
	}
	
	else if (s == "element") {
		cin >> x >> y;
		cout << "element " << x << ' ' << y << ": ";
		cout << mat[x-1][y-1];
		cout << endl;
	}

	else if (s == "columna") {
		cin >> y;
		cout << "columna " << y << ": ";
		for(int i=0; i < n; i++) {
			cout << mat[i][y-1];
			if (i == n-1) cout << endl;
			else cout << ' ';
		}
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	matrix mat(n, row(m));
	matrix_input(n, m, mat);

	string request;
	while (cin >> request) {
		matrix_output(request, n, m, mat);
	}
}