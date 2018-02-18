#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> v[101];
int N, now, value[101][101];
bool visit[101][101];
int _y[] = { 0,0,1,-1 };
int _x[] = { 1,-1,0,0 };
void dfs(int y, int x);
void bfs();
queue<pair<int, int> > q;
int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			int k; cin >> k;
			if (k == 1) q.push(make_pair(i, j));
			v[i].push_back(k);
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!visit[i][j] && v[i][j] != 0) {
				++now;
				dfs(i, j);
			}
		}
	}

	bfs();

	int Min = 100000001;
	int tmp = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			for (int c = 0; c < 4; c++) {
				int Y = i + _y[c];
				int X = j + _x[c];
				if (X >= 0 && Y >= 0 && X < N && Y < N) {
					if (v[i][j] != v[Y][X]) {
						if (Min > value[i][j] + value[Y][X]) {
							Min = value[i][j] + value[Y][X];
						}
					}
				}
			}
		}
	}
	if (100000001 == Min) cout << 0 << endl;
	else cout << Min << endl;
	return 0;
}
void dfs(int y, int x) {
	visit[y][x] = true;
	v[y][x] = now;
	for (int i = 0; i < 4; i++) {
		int Y = y + _y[i];
		int X = x + _x[i];
		if (X >= 0 && Y >= 0 && X < N && Y < N) {
			if (v[Y][X] == 0) continue;
			if (!visit[Y][X]) {
				dfs(Y, X);
			}
		}
	}
}
void bfs() {
	while (!q.empty()) {
		pair <int, int> cur = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int Y = cur.first + _y[i];
			int X = cur.second + _x[i];
			if (X >= 0 && Y >= 0 && X < N && Y < N) {
				if (v[Y][X] == 0) {
					v[Y][X] = v[cur.first][cur.second];
					value[Y][X] = value[cur.first][cur.second] + 1;
					q.push(make_pair(Y, X));
				}
			}
		}
	}
}