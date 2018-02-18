#include <cstdio>
using namespace std;


void go(int k);
int n;
int main() {
	scanf("%d", &n);
	if (n == 0) printf("0");
	else go(n);
	return 0;
}
void go(int k) {
	if (k == 0) return;
	if (k % 2 == 0) {
		go(-(k / 2));
		printf("0");
	}
	else {
		if (k < 0) go(-(k - 1) / 2);
		else go(-(k / 2));
		printf("1");
	}
}