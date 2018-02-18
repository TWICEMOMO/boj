#include <cstdio>
#include <queue>
using namespace std;

priority_queue<int>q;
int n, m, c, miro[101][101], now;
int x[] = { 0,0,1,-1 };
int y[] = { 1,-1,0,0 };
void dfs(int _y, int _x);
int main() {
	scanf("%d %d %d", &n, &m, &c);
	for (int i = 0; i < c; i++) {
		int a, b, c, d;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		b=n-b; d=n-d;
		for (int j = d; j < b;j++) {
			for (int k = a; k< c;k++ ) {
				miro[j][k] = 1;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (miro[i][j] == 0) {
				now = 0;
				dfs(i, j);
				q.push(-now);
			}
		}
	}
	printf("%d\n", q.size());
	while (!q.empty()) {
		printf("%d ", -q.top());
		q.pop();
	}
	return 0;
}
void dfs(int _y, int _x) {
	now++;
	miro[_y][_x] = 1;
	for (int i = 0; i < 4; i++) {
		int X = _x + x[i];
		int Y = _y + y[i];
		if (X >= 0 && Y >= 0 && X < m && Y < n && miro[Y][X]==0) {
			dfs(Y, X);
		}
	}
}