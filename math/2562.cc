#include <cstdio>
using namespace std;

int Max, now, d[9];
int main() {
	for (int i = 0; i < 9; i++) {
		scanf("%d", &d[i]);
		if (Max < d[i]) {
			Max = d[i];
			now = i + 1;
		}
	}
	printf("%d\n%d\n", Max, now);
	return 0;
}