#include <cstdio>
#include <vector>
using namespace std;

int d[101][101], n, m, c, Max, now;
int x[] = { 0,0,1,-1 };
int y[] = { 1,-1,0,0 };
void dfs(int _y,int _x);
int main() {
	scanf("%d %d %d", &n, &m, &c);
	for (int i = 0; i < c; i++) {
		int a, b; scanf("%d %d", &a, &b);
		d[a][b] = 1;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (d[i][j]==1) {
				now = 0;
				dfs(i, j);
				if (Max < now) {
					Max = now;
				}
			}
		}
	}
	printf("%d\n", Max);
	return 0;
}
void dfs(int _y, int _x) {
	now++;
	d[_y][_x] = 2;
	for (int i = 0; i < 4; i++) {
		int X = _x + x[i];
		int Y = _y + y[i];
		if (X >= 0 && Y >= 0 && X <= m && Y <= n && d[Y][X]==1) {
			dfs(Y, X);
		}
	}
}