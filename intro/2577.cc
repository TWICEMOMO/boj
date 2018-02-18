#include <cstdio>
using namespace std;

int a, b, c, d[10];
int main() {
	scanf("%d %d %d", &a, &b, &c);
	a = a*b*c;
	while (a != 0) {
		d[a % 10]++;
		a /= 10;
	}
	for (int i = 0; i < 10; i++)
		printf("%d\n", d[i]);
	return 0;
}