#include <cstdio>
#include <queue>
using namespace std;

int n, now;
priority_queue<int>q;
char c[26][26];
int y[] = { 0,0,1,-1 };
int x[] = { 1,-1,0,0 };
void dfs(int _y, int _x);
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", c[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (c[i][j] == '1') {
				now = 0;
				dfs(i, j);
				q.push(-now);
			}
		}
	}
	printf("%d\n", q.size());
	while (!q.empty()) {
		printf("%d\n", -q.top());
		q.pop();
	}
	return 0;
}
void dfs(int _y, int _x) {
	now++;
	c[_y][_x] = '0';
	for (int i = 0; i < 4; i++) {
		int Y = _y + y[i];
		int X = _x + x[i];
		if (X >= 0 && Y >= 0 && X < n && Y < n && c[Y][X] == '1') {
			dfs(Y, X);
		}
	}
}