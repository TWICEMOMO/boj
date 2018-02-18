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
	scanf("%d %d", &n, &m);
	for (int i = n; i <= m; i++) {
		if (!prime[i]) printf("%d\n", i);
	}
	return 0;
}