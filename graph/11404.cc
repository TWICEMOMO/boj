#include <iostream>
#include <algorithm>
using namespace std;

const int INF = 1000000007;
int n, m;
int a[101][101];
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i != j) a[i][j] = INF;
		}
	}
	for (int i = 0; i < m; i++) {
		int y, x, w; cin >> y >> x >> w;
		if (a[y - 1][x - 1] > w) a[y - 1][x - 1] = w;
	}

	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << '\n';
	}
	return 0;
}