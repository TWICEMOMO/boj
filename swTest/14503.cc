#include <iostream>
using namespace std;

int n, m, r, c, d, a[51][51], res;
int y[] = { -1, 0, 1, 0 }; // 북 동 남 서
int x[] = { 0, 1, 0, -1 };
int main() {
	cin >> n >> m >> r >> c >> d;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	while (1) {
		a[r][c] = 2;
		bool flag = false;
		for (int i = 0; i < 4; i++) {
			d = (d + 3) % 4;
			int Y = r + y[d];
			int X = c + x[d];
			if (a[Y][X] == 1 || a[Y][X] == 2 || Y < 0 || X < 0 || X >= m || Y >= n) continue;
			res++;
			r = Y;
			c = X;
			flag = true;
			break;
		}
		if (!flag) {
			int Y = r + y[d] * -1;
			int X = c + x[d] * -1;
			if (a[Y][X] == 1 || Y < 0 || X < 0 || X >= m || Y >= n) break;
			r = Y;
			c = X;
		}
	}
	cout << res + 1 << '\n';
	return 0;
}