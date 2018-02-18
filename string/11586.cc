#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int n, k;
char c[101][101];
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}
	cin >> k;
	if (k == 1) {
		for (int i = 0; i < n; i++) {
			cout << c[i] << '\n';
		}
	}
	else if (k == 2) {
		for (int i = 0; i < n; i++) {
			for (int j = n; j > 0; j--) {
				cout << c[i][j - 1];
			}
			cout << '\n';
		}
	}
	else if (k == 3) {
		for (int i = n; i > 0; i--) {
			cout << c[i - 1] << '\n';
		}
	}
	return 0;
}