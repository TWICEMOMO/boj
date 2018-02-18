#include <cstdio>
#include <algorithm>
using namespace std;

int N, a[1000001];
int go(int X);
int main() {
	scanf("%d", &N);
	printf("%d\n", go(N));
	return 0;
}
int go(int X) {
	if (X == 1) return 0;
	if (a[X] > 0) return a[X];
	a[X] = go(X - 1) + 1;
	if (X % 3 == 0) {
		a[X] = min(a[X], go(X / 3) + 1);
	}
	if (X % 2 == 0) {
		a[X] = min(a[X], go(X / 2) + 1);
	}
	return a[X];
}