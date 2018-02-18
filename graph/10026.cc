#include <cstdio>
#include <cstring>
using namespace std;

int n, now1, now2;
int x[] = { 0,0,1,-1 };
int y[] = { 1,-1,0,0 };
bool visit[101][101];
char c[101][101];
void dfs(int _y, int _x, char s);
int main() {
	scanf("%d",&n);
	for (int i = 0; i < n; i++) {
		scanf("%s", c[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!visit[i][j]) {
				now1++;
				dfs(i, j, c[i][j]);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (c[i][j] == 'G') {
				c[i][j] = 'R';
			}
		}
	}
	memset(visit, false, sizeof(visit));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!visit[i][j]) {
				now2++;
				dfs(i, j, c[i][j]);
			}
		}
	}
	printf("%d\n%d\n", now1, now2);
	return 0;
}
void dfs(int _y, int _x, char s) {
	visit[_y][_x] = true;
	for (int i = 0; i < 4; i++) {
		int X = _x + x[i];
		int Y = _y + y[i];
		if (X >= 0 && Y >= 0 && X < n && Y < n && s == c[Y][X] && !visit[Y][X]) {
			dfs(Y, X, s);
		}
	}
}