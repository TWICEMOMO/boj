#include <cstdio>
#include <algorithm>
using namespace std;

int d[5], ans;
int main() {
	for (int i = 0; i < 5; i++) {
		scanf("%d", &d[i]);
		ans += d[i];
	}
	sort(d, d + 5);
	printf("%d\n%d\n", ans/5, d[2]);
	return 0;
}