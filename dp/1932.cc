#include <iostream>
#include <stack>
#include <queue>
#include <list>
#include <deque>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

int go(int y, int x);
int n,a[501][501], d[501][501];
int main() {
	cin >> n;
	memset(d, -1, sizeof(d));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cin >> a[i][j];
		}
	}
	cout << go(0, 0) << '\n';
	return 0;
}
int go(int y, int x) {
	if (y == n - 1) return a[y][x];
	int &ret = d[y][x];
	if (ret != -1) return d[y][x];
	return ret = max(go(y + 1, x), go(y + 1, x + 1)) + a[y][x];
}