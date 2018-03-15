#include <iostream>
#include <algorithm>
using namespace std;

int n, m, a[101][101], Min = 10000007, idx;
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i != j) a[i][j] = 123123123;
		}
	}
	for (int i = 0; i < m; i++) {
		int y, x; cin >> y >> x;
		a[y - 1][x - 1] = a[x - 1][y - 1] = 1;
	}
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j < n; j++) {
			sum += a[i][j];
		}
		if (Min > sum) {
			Min = sum;
			idx = i;
		}
	}
	cout << idx + 1 << '\n';
	return 0;
}