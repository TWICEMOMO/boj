#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <stack>
#include <queue>
#include <vector>
#include <cstdio>
using namespace std;

int goy(int y);
int gox(int x);
int n, k, a[101][101], res;
int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		res += goy(i);
		res += gox(i);
	}
	cout << res << '\n';
	return 0;
}
int goy(int y) {
	int ans = 1;
	int res = 0;
	bool flag = true;
	for (int i = 0; i < n - 1; i++) {
		if (a[y][i] == a[y][i + 1]) ans++;
		else if (a[y][i] - 1 == a[y][i + 1] && ans >= 0) ans = (1 - k);
		else if (a[y][i] + 1 == a[y][i + 1] && ans >= k) ans = 1;
		else {
			flag = false;
			break;
		}
	}
	if (flag && ans >= 0) res++;
	return res;
}
int gox(int x) {
	int ans = 1;
	int res = 0;
	bool flag = true;
	for (int i = 0; i < n - 1; i++) {
		if (a[i][x] == a[i + 1][x]) ans++;
		else if (a[i][x] - 1 == a[i + 1][x] && ans >= 0) ans = (1 - k);
		else if (a[i][x] + 1 == a[i + 1][x] && ans >= k) ans = 1;
		else {
			flag = false;
			break;
		}
	}
	if (flag && ans >= 0) res++;
	return res;
}