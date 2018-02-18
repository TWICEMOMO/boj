#include <cstdio>
using namespace std;
#define Max 1000000000

int n;
long long d[101][10], sum;
int main() {
	scanf("%d", &n);
	for (int i = 1; i < 10; i++) {
		d[1][i] = 1;
	}
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j < 10; j++) {
			if (j - 1 >= 0) d[i][j] += d[i - 1][j - 1];
			if (j + 1 < 10) d[i][j] += d[i - 1][j + 1];
			d[i][j] %= Max;
		}
	}
	for (int i = 0; i < 10; i++) {
		sum += d[n][i];
		sum %= Max;
	} 
	printf("%lld\n", sum);
	return 0;
}