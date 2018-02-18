#include <cstdio>
using namespace std;

int n;
int main() {
	scanf("%d", &n);
	int cnt = 1;
	int tmp = 0;
	int m = 0, j = 0;
	while (1) {
		int k = 1;
		int kk = cnt;
		if (cnt % 2 == 0) {
			for (int i = 1; i <= cnt; i++) {
				m = i;
				j = kk--;
				tmp++;
				if (tmp == n) {
					printf("%d/%d", m,j );
					return 0;
				}
			}
		}
		else {
			for (int i = 1; i <= cnt; i++) {
				m = kk--;
				j = i;
				tmp++;
				if (tmp == n) {
					printf("%d/%d", m, j);
					return 0;
				}
			}
		}
		cnt++;
	}
	return 0;
}