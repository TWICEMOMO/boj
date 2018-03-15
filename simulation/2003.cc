#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

int n, m, a[10001], sum[10001],res;
int main() {
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		sum[i] = sum[i - 1] + a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <i; j++) {
			if (m == sum[i] - sum[j]) res++;
		}
	}
	cout << res << '\n';
	return 0;
}