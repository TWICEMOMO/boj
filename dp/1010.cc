#include <iostream>
#include <cstring>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
using namespace std;

int t,d[31][31];
int go(int n, int r);
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> t;
	memset(d, -1, sizeof(d));
	while (t--) {
		int n, m; cin >> n >> m;
		cout << go(m,n) << '\n';
	}
	return 0;
}
int go(int n, int r) {
	if (r == 0 || n == r) return d[n][r]=1;
	int &ret = d[n][r];
	if (ret != -1) return ret;
	return d[n][r] = go(n - 1, r - 1) + go(n - 1, r);
}