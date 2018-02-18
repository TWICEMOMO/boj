#include <cstdio>
using namespace std;

int t = 5, ans;
int main() {
	for (int i = 0; i < t; i++) {
		int k; scanf("%d", &k);
		ans += (k*k);
	}
	printf("%d\n", ans % 10);
	return 0;
}