#include <cstdio>
using namespace std;

double ans;
int n, a[1001], Max;
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		if (Max < a[i]) Max = a[i];
	}
	for (int i = 0; i < n; i++) {
		ans += (a[i] * 100 / double(Max));
	}
	ans /= n;
	printf("%0.2lf", ans);
	return 0;
}