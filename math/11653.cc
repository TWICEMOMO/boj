#include <cstdio>
using namespace std;

int n;
int main() {
	scanf("%d", &n);
	for (int i = 2;; i++) {
		if (n%i == 0) {
			printf("%d\n", i);
			n /= i;
			i--;
		}
		if (n == 1) break;
	}
	return 0;
}