#include <cstdio>
using namespace std;

int a, b;
int gcd(int _a, int _b);
int main() {
	scanf("%d %d", &a, &b);
	int GCD = gcd(a, b);
	printf("%d\n%d\n", GCD, a*b / GCD);
	return 0;
}
int gcd(int _a,int _b) {
	if (_b == 0) return _a;
	return gcd(_b, _a%_b);
}