#include <iostream>
using namespace std;

int n, q, a[101], d[11000], cnt;
int main() {
	cin >> n >> q;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = a[i]; j != 0;j--) {
			d[cnt++] = i;
		}
	}
	for (int i = 0; i < q; i++) {
		int k; cin >> k;
		cout << d[k] << '\n';
	}
	return 0;
}