#include <iostream>
#include <queue>
using namespace std;

int _y[] = { 0,0,1,-1 };
int _x[] = { 1,-1,0,0 };
int Min = 1212121212;
struct G {
	int y;
	int x;
	int b;
	int c;
	G(int y, int x, int b, int c) :y(y), x(x), b(b), c(c) {}
	G() {}
};
bool visit[1001][1001][10];
char c[1001][1001];
int n, m,k;
queue<G>q;
int main() {
	cin >> n >> m>>k;
	for (int i = 0; i < n; i++) cin >> c[i];
	q.push(G(0, 0, k, 1));

	while (!q.empty()) {
		G now = q.front();
		q.pop();
		if (now.y == n - 1 && now.x == m - 1) {
			cout << now.c << '\n';
			return 0;
		}
		if (visit[now.y][now.x][now.b]) continue;
		visit[now.y][now.x][now.b] = true;
		for (int i = 0; i < 4; i++) {
			int Y = now.y + _y[i];
			int X = now.x + _x[i];
			if (Y < 0 || X < 0 || Y >= n || X >= m || visit[Y][X][now.b]) continue;
			if (c[Y][X] == '0') q.push(G(Y, X, now.b, now.c + 1));
			else if (c[Y][X] == '1' && now.b) {
				if(now.b!=0) q.push(G(Y, X, now.b - 1, now.c + 1));
			}
		}
	}
	cout << -1 << '\n';
	return 0;
}