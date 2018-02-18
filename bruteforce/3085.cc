#include <cstdio>
using namespace std;

int n,Max,cnt;
char c[51][51];
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", &c[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cnt = 1;
			if (j < n - 1) {
				char tmp = c[i][j];
				c[i][j] = c[i][j + 1];
				c[i][j + 1] = tmp;
				for (int k = 1; k < n; k++) {
					if (c[i][k - 1] == c[i][k]) {
						cnt++;
					}
					else cnt = 1;
					if (Max < cnt) Max = cnt;
				}
				cnt = 1;
					for (int k = j; k <= j + 1; k++) {
						cnt = 1;
						for (int t = 1; t < n; t++) {
							if (c[t-1][k] == c[t][k]) {
								cnt++;
							}
							else cnt = 1;
							if (Max < cnt) Max = cnt;
					}
				}
					tmp = c[i][j];
					c[i][j] = c[i][j + 1];
					c[i][j + 1] = tmp;
			}

		}

	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cnt = 1;

			if (i < n - 1) {
				char tmp = c[i][j];
				c[i][j] = c[i + 1][j];
				c[i + 1][j] = tmp;
				for (int k = 1; k < n; k++) {
					if (c[k-1][j] == c[k][j]) {
						cnt++;
					}
					else cnt = 1;
					if (Max < cnt) Max = cnt;
				}
					for (int k = i; k <= i + 1; k++) {
						cnt = 1;
						for (int t = 1; t < n; t++) {
							if (c[k][t-1] == c[k][t]) {
								cnt++;
							}
							else cnt = 1;
							if (Max < cnt) Max = cnt;
						}
					}
					tmp = c[i][j];
				c[i][j] = c[i + 1][j];
				c[i + 1][j] = tmp;
			}

		}
	}
	printf("%d\n", Max);
	return 0;
}