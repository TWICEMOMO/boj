#include <cstdio>
using namespace std;

int N, a[1001], d[1001];
int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < N; i++) {
		d[i] = a[i];
		for (int j = 0; j < i; j++) {
			if (i - j >= 0) {
				if (d[i] < d[i - j - 1] + a[j]) 
					d[i] = d[i - j - 1] + a[j];
			}
		}
	}
	printf("%d\n", d[N - 1]);
	return 0;
}