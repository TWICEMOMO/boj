#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int Max = 1e9 + 7;
int n, m, d[1001][1001];
int main() {
	cin >> n >> m;
	d[1][1] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (j + 1 <= m) d[i][j + 1] += d[i][j];
			d[i][j + 1] %= Max;
			if (j + 1 <= m && i + 1 <= n) d[i + 1][j + 1] += d[i][j];
			d[i + 1][j + 1] %= Max;
			if (i + 1 <= n) d[i + 1][j] += d[i][j];
			d[i + 1][j] %= Max;
		}
	}
	cout << d[n][m];
	return 0;
}