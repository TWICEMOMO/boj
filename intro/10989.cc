#include <cstdio>
using namespace std;

int d[10001], n;
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int k; scanf("%d", &k);
		d[k]++;
	}
	for (int i = 1; i < 10001; i++) {
		for (int j = 0; j < d[i]; j++) {
			printf("%d\n", i);
		}
	}
	return 0;
}