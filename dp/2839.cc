#include <cstdio>
#include <algorithm>
using namespace std;

int n, a[5001];
int main() {
	scanf("%d", &n);
	if (n == 4) {
		printf("-1");
		return 0;
	}
	for (int i = 0; i <= n; i++) {
		a[i] = 1000000;
	}
	a[3] = a[5] = 1;
	for (int i = 6; i <= n; i++) {
		if (a[i - 3] != 0) a[i] = min(a[i], a[i - 3] + 1);
		if (a[i - 5] != 0) a[i] = min(a[i], a[i - 5] + 1);
	}
	if (a[n] == 1000000) printf("-1");
	else printf("%d\n", a[n]);
	return 0;
}