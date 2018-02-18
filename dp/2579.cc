#include <cstdio>
using namespace std;

int n, d[100001],tmp;
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &d[i]);
	}
	int Max = -1200;
	for (int i = 0; i < n; i++) {
		tmp += d[i];
		if (Max < tmp) Max = tmp;
		if (tmp<0) 	tmp = 0;
		
	}
	printf("%d\n", Max);
	return 0;
}