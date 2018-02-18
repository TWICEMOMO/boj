#include <cstdio>
using namespace std;

int n, d[101], cnt, ans;
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &d[i]);
	}
	for (int i = 0; i < n; i++) {
		if (d[i] == 1) {
			cnt++;
			ans += cnt;
		}
		else {
			cnt = 0;
		}
	}
	printf("%d\n", ans);
	return 0;
}