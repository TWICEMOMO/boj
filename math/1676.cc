#include <cstdio>
using namespace std;

int n, ans;
int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (i % 5 == 0) ans++;
		if (i % 25 == 0) ans++;
		if (i % 125 == 0)ans++;
	}
	printf("%d\n", ans);
	return 0;
}