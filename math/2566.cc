#include <cstdio>
using namespace std;

int Max, x, y;
int main() {
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			int k; scanf("%d", &k);
			if (Max < k) {
				Max = k;
				x = j;
				y = i;
			}
		}
	}
	printf("%d\n%d %d\n", Max, y, x);
	return 0;
}