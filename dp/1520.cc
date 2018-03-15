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

int _x[] = { 1,-1,0,0 };
int _y[] = { 0,0,1,-1 };
int go(int y, int x);
int n, m, a[501][501], d[501][501];
int main() {
	memset(d, -1, sizeof(d));
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	cout << go(0, 0);
	return 0;
}
int go(int y, int x) {
	if (y == n - 1 && x == m - 1) return 1;
	int &ret = d[y][x];
	if (ret!=-1) return ret;
	ret = 0;
	for (int i = 0; i < 4; i++) {
		int Y = y + _y[i];
		int X = x + _x[i];
		if (X < 0 || Y < 0 || X >= m || Y >= n) continue;
		if (a[y][x] > a[Y][X]) {
			ret += go(Y, X);
		}
	}
	return ret;
}