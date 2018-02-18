#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int n, m, a[101];
int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		a[i] = i;
	}
	for (int i = 0; i < m; i++) {
		int p, q; cin >> p >> q;
		reverse(a + p, a + q + 1);
	}
	for (int i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}