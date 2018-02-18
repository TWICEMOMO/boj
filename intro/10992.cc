#include <cstdio>
using namespace std;

int n;
int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (i == n) for (int j = 0; j < n * 2 - 1; j++) printf("*");
		else {
			for (int j = i; j < n; j++) printf(" ");
			printf("*");
			for (int j = 0; j < (2*(i-1))-1; j++) printf(" ");
			if(i!=1) printf("*");
		}
		printf("\n");
	}
	return 0;
}