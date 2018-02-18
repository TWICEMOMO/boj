#include <cstdio>
using namespace std;

int n;
long long d[1001][10], sum;
int main() {
	scanf("%d", &n);
	for (int i = 0; i < 10; i++) {
		d[1][i] = 1;
	}
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = j; k < 10; k++) {
				d[i][j] += d[i - 1][k];
				d[i][j] %= 10007;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		sum += d[n][i];
		sum %= 10007;
	}
	printf("%lld", sum);
	return 0;
}