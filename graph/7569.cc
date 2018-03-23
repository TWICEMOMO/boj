#include <iostream>
#include <queue>
using namespace std;

int a[101][101][101], n, m, h, res;
int _x[] = { 0,0,1,-1 };
int _y[] = { 1,-1,0,0 };
struct G {
	int h;
	int y;
	int x;
	G(int h, int y, int x) :h(h), y(y), x(x) {}
	G() {}
};
int main() {
	cin >> m >> n >> h;
	queue<G>q;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				cin >> a[i][j][k];
				if (a[i][j][k] == 1) q.push(G(i, j, k));
			}
		}
	}
	if (q.size() == h*m*n) {
		cout << 0 << '\n';
		return 0;
	}
	while (!q.empty()) {
		G now = q.front();
		q.pop();
		if (res < a[now.h][now.y][now.x]) res = a[now.h][now.y][now.x];
		bool flag = false;
		for (int i = 0; i < 4; i++) {
			int Y = now.y + _y[i];
			int X = now.x + _x[i];
			if (X < 0 || Y < 0 || X >= m || Y >= n || a[now.h][Y][X] != 0) continue;
			a[now.h][Y][X] += (a[now.h][now.y][now.x] + 1);
			q.push(G(now.h, Y, X));
		}
		if (now.h + 1 < h && a[now.h + 1][now.y][now.x] == 0) {
			a[now.h + 1][now.y][now.x] += (a[now.h][now.y][now.x] + 1);
			q.push(G(now.h + 1, now.y, now.x));
		}
		if (now.h - 1 >= 0 && a[now.h - 1][now.y][now.x] == 0) {
			a[now.h - 1][now.y][now.x] += (a[now.h][now.y][now.x] + 1);
			q.push(G(now.h - 1, now.y, now.x));
		}
	}

	bool chk = true;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				if (a[i][j][k] == 0) chk = false;
			}
		}
	}
	if (chk) cout << res - 1 << '\n';
	else cout << -1 << '\n';
	return 0;
}