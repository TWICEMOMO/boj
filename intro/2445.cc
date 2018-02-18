#include <cstdio>
using namespace std;

int n, size;
int main() {
	scanf("%d", &n);
	size = n * 2;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++) printf("*");
		for (int j = 0; j < 2 * (n - i); j++) printf(" ");
		for (int j = 0; j < i; j++) printf("*");
		printf("\n");
	}
	for (int i = 1; i < n; i++) {
		for (int j = i; j < n; j++) printf("*");
		for (int j = 0; j < i * 2; j++) printf(" ");
		for (int j = i; j < n; j++) printf("*");
		printf("\n");
	}
	return 0;
}