#include <iostream>
#include <cstring>
using namespace std;

int _y[] = { 0,0,1 ,-1 };
int _x[] = { 1,-1,0,0 };
bool visit[101][101];
int N, a[101][101], ans, Max, maxJangma;
void dfs(int j, int y, int x);
int main() {
	cin.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> a[i][j];
			if (maxJangma < a[i][j])
				maxJangma = a[i][j];
		}
	}
	for (int i = 0; i < maxJangma; i++) {
		ans = 0;
		memset(visit, false, sizeof(visit));
		for (int c = 0; c < N; c++) {
			for (int j = 0; j < N; j++) {
				if (a[c][j] > i && !visit[c][j]) {
					ans++;
					dfs(i, c, j);
				}
			}
		}
		if (Max < ans) Max = ans;
	}
	cout << Max << '\n';
	return 0;
}
void dfs(int j, int y, int x) {
	visit[y][x] = true;

	for (int i = 0; i < 4; i++) {
		int Y = y + _y[i];
		int X = x + _x[i];
		if (visit[Y][X] || Y < 0 || X < 0 || X >= N || Y >= N || a[Y][X] <= j) continue;
		dfs(j, Y, X);
	}
}