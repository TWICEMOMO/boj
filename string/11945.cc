#include <iostream>
#include <string>
using namespace std;

int n, m;
char c[11][11];
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = m; j > 0; j--) {
			cout << c[i][j - 1];
		}
		cout << '\n';
	}
	return 0;
}