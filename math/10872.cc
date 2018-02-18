#include <cstdio>
using namespace std;

int n, ans=1;
int main() {
	scanf("%d", &n);
	for (int i = 2; i <= n; i++) {
		ans *= i;
	}
	printf("%d\n", ans);
	return 0;
}