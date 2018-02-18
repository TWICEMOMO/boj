#include <cstdio>
using namespace std;

int t, d[101][101], sum;
int main() {
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int a, b; scanf("%d %d", &a, &b);
		for (int j = a; j < a + 10; j++) {
			for (int q = b; q < b + 10; q++) {
				d[j][q] = 1;
			}
		}
	}
	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			if (d[i][j] == 1) sum += 1;
		}
	}
	printf("%d\n", sum);
	return 0;
}