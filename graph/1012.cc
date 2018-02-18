#include <cstdio>
#include <cstring>
using namespace std;

int t, d[51][51], ans;
bool visit[51][51];
void dfs(int y, int x);
int _x[] = { 0,0,1,-1 };
int _y[] = { 1,-1,0,0 };
int n, m, c;
int main() {
	scanf("%d", &t);
	while (t--) {
		memset(visit, false, sizeof(visit));
		memset(d, 0, sizeof(d));
		ans = 0;
		scanf("%d %d %d", &n, &m, &c);
		for (int i = 0; i < c; i++) {
			int a, b; scanf("%d %d", &a, &b);
			d[b][a] = 1;
		}
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++){
				if (d[i][j]==1 && !visit[i][j]) {
					dfs(i, j);
					ans++;
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
void dfs(int y,int x) {
	visit[y][x] = true;
	for (int i = 0; i < 4; i++) {
		int Y = y + _y[i];
		int X = x + _x[i];
  		if (X >= 0 && Y >= 0 && X < n&& Y <m && !visit[Y][X] && d[Y][X]==1) {
			dfs(Y, X);
		}
	}
}