#include <cstdio>
#include <cstring>
using namespace std;

int n;
long long d[1001];
long long go(int k);
int main() {
	scanf("%d", &n);
	memset(d, -1, sizeof(d));
	printf("%lld\n", go(n));
	return 0;
}
long long go(int k) {
	if (d[k] != -1) return d[k];
	if (k == 1) return 1;
	if (k == 2) return 3;
	d[k] = go(k - 1)%10007 + (go(k - 2) * 2)%10007;
	return d[k] % 10007;
}