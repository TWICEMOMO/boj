#include <cstdio>
#include <cstring>
using namespace std;

int n;
long long d[91];
long long go(int k);
int main() {
	scanf("%d", &n);
	memset(d, -1, sizeof(d));
	printf("%lld\n",go(n));
	return 0;
}
long long go(int k) {
	if (k <= 2) return 1;
	if (d[k] != -1) return d[k];
	return d[k] = go(k - 1) + go(k - 2);
}