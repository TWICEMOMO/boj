#include <cstdio>
using namespace std;

int d[1001], n, p[1001], Max;
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &d[i]);
	}
    Max=1;
	for (int i = 0; i < n; i++) {
		p[i] = 1;
		for (int j = 0; j < i; j++) {
			if (d[i] < d[j] && p[i] < p[j] + 1) {
				p[i] = p[j] + 1;
				if (Max < p[i]) {
					Max = p[i];
				}
			}
		}
	}
	printf("%d\n", Max);
	return 0;
}