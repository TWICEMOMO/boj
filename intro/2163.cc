#include <cstdio>
using namespace std;

int a, b;
int main() {
	scanf("%d %d", &a, &b);
	printf("%d\n", (a - 1) + a*(b - 1));
	return 0;
}