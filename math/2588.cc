#include <cstdio>
#include <cmath>
using namespace std;

int n, m, d[7], i, ans;
int main() {
	scanf("%d %d", &n, &m);
	for (i = 0;;i++) {
		d[i] = n*(m % 10);
		m /= 10;
		if (m == 0) break;
	}
	for (int j = 0; j <= i; j++) {
		printf("%d\n", d[j]);
		ans += (d[j]*pow(10,j));
	}
	printf("%d\n", ans);
	return 0;
}