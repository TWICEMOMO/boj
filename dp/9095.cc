#include <cstdio>
using namespace std;

int n, a[11];
int go(int k);
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int c; scanf("%d", &c);
		printf("%d\n", go(c));
	}
	return 0;
}

int go(int k) {
	if (k == 0)return 1;
	if (a[k] != 0) return a[k];
	if (k >= 3) a[k] += go(k - 3);
	if (k >= 2) a[k] += go(k - 2);
	if (k >= 1) a[k] += go(k - 1);
	return a[k];
}