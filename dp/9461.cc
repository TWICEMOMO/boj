#include <cstdio>
using namespace std;

int t;
long long d[101] = { 0,1,1,1,2,2,3,4,5,7,9 };
int main() {
	for (int i = 10; i < 101; i++) {
		d[i] = d[i - 5] + d[i - 1];
	}
	scanf("%d", &t);
	while (t--) {
		int k; scanf("%d", &k);
		printf("%lld\n",d[k]);
	}
	return 0;
}