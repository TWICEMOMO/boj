#include <cstdio>
#include <cstring>
using namespace std;

int n;
int d[1000001];
int main() {
	scanf("%d", &n);
	d[1] = 1;
	d[2] = 2;
	for (int i = 3; i <= n; i++) {
		d[i] = d[i - 1] + d[i - 2];
		d[i] %= 15746;
	}
	printf("%d\n", d[n]%15746);
	return 0;
}