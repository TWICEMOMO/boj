#include <cstdio>
using namespace std;

int n, d[1000001];
int go(int k);
int main() {
	scanf("%d", &n);
	for (int i = 1; i < n; i++) {
		int now = go(i);
		if(d[now]==0) d[now]=i;
	}
	printf("%d", d[n]);
}
int go(int k) {
	int temp = k;
	while (k!=0) {
		temp += k % 10;
		k /= 10;
	}
	return temp;
}