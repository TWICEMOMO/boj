#include <iostream>
using namespace std;

#define MOD 1000000007;
long long seg[3000001];
long long update(int n, int s, int e, int idx, long long v);
long long multi(int n, int s, int e, int l, int r);
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b, c;
	cin >> a >> b >> c;
	for (int i = 0; i < a; i++) {
		long long k; cin >> k;
		update(1, 0, a - 1, i, k);
	}
	int len = b + c;
	for (int i = 0; i < len; i++) {
		int x; cin >> x;
		if (x == 1) {
			int y;
			long long z;
			cin >> y >> z;
			y--;
			update(1, 0, a - 1, y, z);
		}
		else {
			int y, z;
			cin >> y >> z;
			cout << multi(1, 0, a - 1, y - 1, z - 1) << '\n';
		}
	}
	return 0;
}
long long update(int n, int s, int e, int idx, long long v) {
	if (idx<s || idx>e) return seg[n];
	if (s == e) return seg[n] = v;
	return seg[n] = (update(n * 2, s, (s + e) / 2, idx, v) * update(n * 2 + 1, (s + e) / 2 + 1, e, idx, v))%MOD;
}
long long multi(int n, int s, int e, int l, int r) {
	if (e < l || r < s) return 1;
	if (l <= s && e <= r) return seg[n];
	return (multi(n * 2, s, (s + e) / 2, l, r) * multi(n * 2 + 1, (s + e) / 2 + 1, e, l, r))%MOD;
}