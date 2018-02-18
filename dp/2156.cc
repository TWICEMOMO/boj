#include <cstdio>
#include <algorithm>
using namespace std;

int n, d[10001], p[10001];
int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &d[i]);
	}
	for (int i = 1; i <= n; i++) {
		if (i == 1) p[i] = d[i];
		else if (i == 2) p[i] = p[i - 1] + d[i];
		else {
			p[i] = max(max(p[i - 1], d[i] + d[i - 1] + p[i - 3]), d[i] + p[i - 2]);
		}
	}
	printf("%d\n", p[n]);
	return 0;
}