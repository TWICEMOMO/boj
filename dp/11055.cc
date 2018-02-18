#include <cstdio>
#include <algorithm>
using namespace std;

int n, a[1001], d[1001];
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++) {
		d[i] = a[i];
		for (int j = 0; j < i; j++) {
			if (a[j] < a[i] && d[i] < d[j]+a[i]) {
				d[i] = d[j] + a[i];
			}
		}
	}
	sort(d, d + n);
	printf("%d\n", d[n - 1]);
	return 0;
}