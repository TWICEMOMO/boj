#include <iostream>
#include <cstring>
using namespace std;

int t, n, a[501], s[501], d[501][501];
int go(int l, int r);
int main() {
	cin >> t;
	for (int i = 0; i < t; i++) {
		memset(s, 0, sizeof(s));
		memset(d, -1, sizeof(d));
		cin >> n;
		for (int k = 1; k <= n; k++) {
			cin >> a[k];
			s[k] = s[k - 1] + a[k];
		}
		cout << go(1, n)<<'\n';
	}
	return 0;
}
int go(int l, int r) {
	if (l == r) return 0;
	if (d[l][r] != -1) return d[l][r];
	int &ret = d[l][r];
	for (int i = l; i < r; i++) {
		int t = go(l, i) + go(i + 1, r) + s[r] - s[l-1];
		if (ret == -1 || ret > t) ret = t;
	}
	return ret;
}