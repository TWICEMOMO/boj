#include <iostream>
using namespace std;

char w[101][101];
int n, m, a[101][101];
void go(int y, int x);
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> w[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (w[i][j] == 'c') {
				a[i][j] = 1;
				go(i, j);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == 0) cout << -1 << " ";
			else cout << a[i][j] - 1 << " ";
		}
		cout << '\n';
	}
	return 0;
}
void go(int y, int x) {
	if (x == m) return;
	if (w[y][x + 1] != '.') return;
	a[y][x + 1] = a[y][x] + 1;
	go(y, x + 1);
}