#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

int t, n, a[2][100001], d[2][100001];
int main() {
	scanf("%d", &t);
	while (t--) {
		memset(d, 0, sizeof(d));
		memset(a, 0, sizeof(a));
		scanf("%d", &n);
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < n; j++) {
				scanf("%d", &a[i][j]);
			}
		}
		d[0][0] = a[0][0];
		d[1][0] = a[1][0];
		d[1][1] = d[0][0] + a[1][1];
		d[0][1] = d[1][0] + a[0][1];
		for (int i = 2; i < n; i++) {
			d[0][i] = max(d[1][i - 1] + a[0][i], d[1][i - 2] + a[0][i]);
			d[1][i] = max(d[0][i - 1] + a[1][i], d[0][i - 2] + a[1][i]);
		}
		int Max = max(d[0][n - 1], d[1][n - 1]);
		printf("%d\n", Max);
	}
	return 0;
}