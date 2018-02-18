#include <cstdio>
#include <algorithm>
using namespace std;

int d[9], sum;
int main() {
	for (int i = 0; i < 9; i++) {
		scanf("%d", &d[i]);
		sum += d[i];
	}
	for (int i = 0; i < 9; i++) {
		for (int j = i+1; j < 9; j++) {
			if (sum - d[i] - d[j] == 100) {
				d[i] = 0;
				d[j] = 0;
			}
		}
	}
	sort(d, d + 9);
	for (int i = 0; i < 9; i++) {
		if (d[i] != 0)printf("%d\n", d[i]);
	}
	return 0;
}