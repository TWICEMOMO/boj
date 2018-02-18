#include <cstdio>
using namespace std;

int d[1001], n, p[1001], Max, q[1001];
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &d[i]);
	}
	for (int i = 0; i < n; i++) {
		p[i] = 1;
		for (int j = 0; j < i; j++) {
			if (d[i] > d[j] && p[i] < p[j] + 1) {
				p[i] = p[j] + 1;
			}
		}
	}

	for (int i = n - 1; i >= 0; i--) {
		q[i] = 1;
		for (int j = n - 1; j > i; j--) {
			if (d[i] > d[j] && q[i] < q[j] + 1) {
				q[i] = q[j] + 1;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (Max < p[i] + q[i]) {
			Max = p[i] + q[i];
		}
	}
	printf("%d\n", Max - 1);
	return 0;
}