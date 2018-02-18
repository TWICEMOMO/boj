#include <cstdio>
using namespace std;

int n, ans;
bool prime[1001];
int main() {
	prime[0] = prime[1] = true;
	for (int i = 2; i < 1001; i++) {
		if(!prime[i]) prime[i] = false;
		for (int j = i+i; j < 1001; j+=i) {
			prime[j] = true;
		}
	}
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int k; scanf("%d", &k);
		if (!prime[k]) ans++;
	}
	printf("%d\n", ans);
	return 0;
}