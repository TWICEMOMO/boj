#include <cstdio>
using namespace std;

int t = 4, ans, Max;
int main() {
	while (t--) {
		int a, b; scanf("%d %d", &a, &b);
		ans -= a;
		ans += b;
		if (Max < ans) Max = ans;
	}
	printf("%d\n", Max);
	return 0;
}