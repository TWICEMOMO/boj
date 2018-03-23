#include <iostream>
#include <cstring>
using namespace std;

#define MOD 1000000007;
long long segMax[2000001];
long long segMin[2000001];
long long updateMax(int n, int s, int e, int idx, long long v);
long long updateMin(int n, int s, int e, int idx, long long v);
long long chkMax(int n, int s, int e, int l, int r);
long long chkMin(int n, int s, int e, int l, int r);
int n, m;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	/*for (int i = 0; i < 2000001; i++) {
		segMin[i] = MOD;
	}*/

	for (int i = 0; i < n; i++) {
		long long k; cin >> k;
		updateMax(1, 0, n - 1, i, k);
		updateMin(1, 0, n - 1, i, k);
	}
	for (int i = 0; i < m; i++) {
		int a, b; cin >> a >> b;
		cout << chkMin(1, 0, n - 1, a - 1, b - 1) << " " << chkMax(1, 0, n - 1, a - 1, b - 1) << '\n';
	}
	return 0;
}
long long updateMax(int n, int s, int e, int idx, long long v) {
	if (idx<s || idx>e) return segMax[n];
	if (s == e) return segMax[n] = v;
	long long a = updateMax(n * 2, s, (s + e) / 2, idx, v);
	long long b = updateMax(n * 2 + 1, (s + e) / 2 + 1, e, idx, v);
	if (a < b) return segMax[n] = b;
	else return segMax[n] = a;
}
long long updateMin(int n, int s, int e, int idx, long long v) {
	if (idx<s || idx>e) return segMin[n];
	if (s == e) return segMin[n] = v;
	long long a = updateMin(n * 2, s, (s + e) / 2, idx, v);
	long long b = updateMin(n * 2 + 1, (s + e) / 2 + 1, e, idx, v);
	if (a < b) return segMin[n] = a;
	else return segMin[n] = b;
}
long long chkMax(int n, int s, int e, int l, int r) {
	if (e < l || r < s) return 0;
	if (l <= s && e <= r) return segMax[n];
	long long a = chkMax(n * 2, s, (s + e) / 2, l, r);
	long long b = chkMax(n * 2 + 1, (s + e) / 2 + 1, e, l, r);
	if (a > b) return a;
	else return b;
}
long long chkMin(int n, int s, int e, int l, int r) {
	if (e < l || r < s) return MOD;
	if (l <= s && e <= r) return segMin[n];
	long long a = chkMin(n * 2, s, (s + e) / 2, l, r);
	long long b = chkMin(n * 2 + 1, (s + e) / 2 + 1, e, l, r);
	if (a > b) return b;
	else return a;
}