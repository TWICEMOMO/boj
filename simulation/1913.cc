#include <iostream>
#include <string>
using namespace std;

int n, k, cnt, a[1001][1001];
void go(int y, int x, int pos);
int main() {
	int resy, resx;
	cin >> n >> k;
	go(n / 2, n / 2, 0);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (k == a[i][j]) {
				resy = i;
				resx = j;
			}
			cout << a[i][j] << " ";
		}
		cout << '\n';
	}
	cout << resy + 1 << " " << resx + 1 << '\n';
	return 0;
}
void go(int y, int x, int pos) {
	if (a[y][x] != 0 || y < 0 || x < 0 || y >= n || x >= n) return;
	a[y][x] = ++cnt;
	if (pos == 4 && a[y][x + 1] == 0) go(y, x + 1, 1);
	else if (pos == 0 || pos == 4) go(y - 1, x, 4);
	else if (pos == 1 && a[y + 1][x] == 0) go(y + 1, x, 2);
	else if (pos == 1) go(y, x + 1, 1);
	else if (pos == 2 && a[y][x - 1] == 0) go(y, x - 1, 3);
	else if (pos == 2) go(y + 1, x, 2);
	else if (pos == 3 && a[y - 1][x] == 0) go(y - 1, x, 4);
	else if (pos == 3) go(y, x - 1, 3);
}