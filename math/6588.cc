#include <cstdio>
using namespace std;

int n, m;
bool prime[1000001];
int main() {
	prime[0] = prime[1] = true;
	for (int i = 2; i < 1000001; i++) {
		if(!prime[i]) prime[i] = false;
		for (int j = i+i; j < 1000001; j+=i) {
			prime[j] = true;
		}
	}
	while (1) {
		bool flag = false;
		int a, b;
		int k; scanf("%d", &k);
		if (k == 0) break;
		for (int i = k; i >1; i--) {
			if (!prime[i]) {
				if (!prime[k - i]) {
					flag = true;
					a = i;
					b = k - i;
					break;
				}
			}
		}
	if (flag) printf("%d = %d + %d\n", k, b, a);
	else printf("Goldbach's conjecture is wrong.\n");
	}
	return 0;
}