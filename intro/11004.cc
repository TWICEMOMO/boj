#include <algorithm>
#include <cstdio>
using namespace std;

int d[5000001], n, k;
int main() {
	scanf("%d %d", &n, &k);
	k--;
	for (int i = 0; i < n; i++) {
		scanf("%d", &d[i]);
	}
	nth_element(d, d + k, d + n);
	printf("%d\n", d[k]);
	return 0;
}