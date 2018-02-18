#include <cstdio>
using namespace std;

int n;
int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = i; j < n; j++) {
			printf(" ");
		}
		for (int j = 0; j < i * 2 - 1; j++) {
			printf("*");
		}

		printf("\n");
	}
	return 0;
}