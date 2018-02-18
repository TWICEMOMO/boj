#include <cstdio>
using namespace std;

int a, b, c, cnt = 1;
int main() {
	scanf("%d %d %d", &a, &b, &c);
	while (1) {
		if (a == 1 && b == 1 && c == 1)
			break;
		a--;
		b--;
		c--;
		cnt++;
		if (a == 0) a = 15;
		if (b == 0) b = 28;
		if (c == 0) c = 19;
	}
	printf("%d\n", cnt);
	return 0;
}