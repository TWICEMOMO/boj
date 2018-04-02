#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <cmath>
using namespace std;

int n, m, Max, res;
char c[21][21];
bool visit[26];
int _x[] = { 1,-1,0,0 };
int _y[] = { 0,0,1,-1 };
void dfs(int y, int x);
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> c[i];
	dfs(0, 0);
	cout << res + 1 << '\n';
	return 0;
}
void dfs(int y, int x) {
	visit[c[y][x] - 'A'] = true;
	if (Max > res) res = Max;
	for (int i = 0; i < 4; i++) {
		int Y = y + _y[i];
		int X = x + _x[i];
		if (Y < 0 || X < 0 || Y >= n || X >= m || visit[c[Y][X] - 'A']) continue;
		Max++;
		dfs(Y, X);
		Max--;
		visit[c[Y][X] - 'A'] = false;
	}
}