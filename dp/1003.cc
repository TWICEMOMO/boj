#include <cstdio>
using namespace std;

int t;
int a[41] = { 1,0 }, b[41] = { 0,1 };
int main() {
	scanf("%d", &t);
	for (int i = 2; i < 41; i++) {
		a[i] = a[i - 2] + a[i - 1];
		b[i] = b[i - 2] + b[i - 1];
	}
	for (int i = 0; i < t; i++) {
		int k; scanf("%d", &k);
		printf("%d %d\n", a[k], b[k]);
	}
	return 0;
}