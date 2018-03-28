#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
using namespace std;

int n, m, res;
int _x[] = { 0,0,-1,1 };
int _y[] = { 1,-1,0,0 };
char c[51][51];
bool visit[51][51];
vector<pair<int, int>>v;
int bfs(int i, int j);
struct G {
	int y;
	int x;
	int c;
	G() {}
	G(int y, int x, int c) :y(y), x(x), c(c) {}
};
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> c[i];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (c[i][j] == 'L') {
				memset(visit, false, sizeof(visit));
				res=max(res,bfs(i, j));
			}
		}
	}
	cout << res << '\n';
	return 0;
}
int bfs(int i, int j) {
	visit[i][j] = true;
	queue<G>q;
	q.push(G(i, j, 0));
	int Max = 0;
	while (!q.empty()) {
		G now = q.front();
		if (Max < now.c) Max = now.c;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int Y = now.y + _y[i];
			int X = now.x + _x[i];
			if (X < 0 || Y < 0 || X >= m || Y >= n || visit[Y][X] || c[Y][X]!='L') continue;
			visit[Y][X] = true;
			q.push(G(Y, X, now.c + 1));
		}
	}
	return Max;
}