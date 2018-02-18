#include <cstdio>
using namespace std;

int d[250001], n, k, pro;
void go(int s, int l, int c);
int main() {
	scanf("%d %d", &n, &k);
	d[n] = 1;
	go(n, k, 2);
	printf("%d\n", pro);
	return 0;
}
void go(int s, int l, int c) {
	int tmp = s;
	s = 0;
	int tt = 0;
	while (1) {
		if (tmp == 0) break;
		int k = tmp % 10;
		tmp /= 10;
		int tt = k;
		for (int i = 1; i < l; i++) {
			tt *= k;
		}
		s += tt;
	}
	if (d[s] != 0) {
		pro = d[s]-1;
		return;
	}
	else {
		d[s] = c;
		go(s, l, c + 1);
	}
}