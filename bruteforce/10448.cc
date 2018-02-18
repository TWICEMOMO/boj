#include <cstdio>
using namespace std;

int n, d[1001], i;
int main() {
	scanf("%d", &n);
	for (i = 1; ; i++) {
		d[i] = i*(i + 1) / 2;
		if (d[i] > 1001) break;
	}
	while (n--) {
		int sum = 0;
		int k; scanf("%d", &k);
		for (int a = 1; a < i; a++) {
			for (int b = 1; b < i; b++) {
				for (int c = 1; c < i; c++) {
					sum = d[a] + d[b] + d[c];
					if (sum > k)continue;
					if (sum == k) break;
				}
				if (sum == k) break;
			}
			if (sum == k) break;
		}
		if (sum == k) printf("1\n");
		else printf("0\n");
	}
	return 0;
}