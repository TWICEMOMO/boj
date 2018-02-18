#include <cstdio>
using namespace std;

int a, b, n;
int gcd(int _a, int _b);
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		int GCD = gcd(a, b);
		printf("%d\n",a*b / GCD);
	}
	return 0;
}
int gcd(int _a,int _b) {
	if (_b == 0) return _a;
	return gcd(_b, _a%_b);
}