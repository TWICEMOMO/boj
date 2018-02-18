#include <cstdio>
using namespace std;

int N, line, cnt;
int main() {
	scanf("%d", &N);
	line = 1;
	cnt = 1;
	while (1) {
		if (N <= line) break;
		line += (6 * cnt);
		cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}