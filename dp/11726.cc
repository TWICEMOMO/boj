#include <cstdio>
#include <cstring>
using namespace std;

int n, d[1001];
int go(int k);
int main() {
	scanf("%d", &n);
	memset(d, -1, sizeof(d));
	printf("%d\n", go(n));
	return 0;
}
int go(int k) {
	if (d[k] != -1) return d[k];
	if (k <= 1) return 1;
	d[k] = go(k - 1) + go(k - 2);
	return d[k]%10007;
}