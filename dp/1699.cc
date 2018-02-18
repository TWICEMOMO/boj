#include <cstdio>
#include <algorithm>
using namespace std;

int n, d[100001];
int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		d[i] = 1000000;
	}
	d[0] = 1;
	for (int i = 1; i*i<=n; i++) {
 		for (int j = i*i; j <= n; j++) {
			if (j - (i*i) == 0) d[j] = 1;
			else d[j] = min(d[j],d[j - i*i]+1);
		}
	}
	printf("%d\n", d[n]);
	return 0;
}