#include <cstdio>
using namespace std;

int n;
int main() {
	scanf("%d", &n);
	for (int i = 1; i < n * 2; i++) {
		if (i <= n) {
			for (int j = 0; j < i; j++) {
				printf("*");
			}
			printf("\n");
		}
		else {
			for (int j = i; j < n * 2; j++) {
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}