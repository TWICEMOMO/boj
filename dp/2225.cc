#include <cstdio>
using namespace std;

int n, k;
long long d[201][201];
int main() {
	scanf("%d %d", &n, &k);
	for (int i = 1; i <= n; i++) {
		d[i][1] = 1LL;
	}
	for (int i = 2; i <= k; i++) {
		d[2][i] += (d[2][i - 1] + i);
	}
	for (int i = 3; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			if (j == 1) d[i][j] = 1;
			else d[i][j] = d[i-1][j] + d[i][j - 1];
			d[i][j] %= 1000000000;
		}
	}
	printf("%lld\n", d[n][k]);
	return 0;
}