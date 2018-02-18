#include <cstdio>
#include <queue>
using namespace std;

int go(int y, int x);
char c[101][101];
int n, m;
int _x[] = { 0,0,1,-1 };
int _y[] = { 1,-1,0,0 };
bool visit[101][101];
int main() {
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%s", &c[i]);
	}
	printf("%d\n",go(0, 0));
	return 0;
}
int go(int y, int x) {
	visit[y][x] = true;
	queue<pair<int, int> >q;
	queue<int> cnt;
	q.push(make_pair(y, x));
	cnt.push(1);
	int ans = 0;
	while (!q.empty()) {
		pair<int, int>now = q.front();
		ans = cnt.front();
		q.pop(); cnt.pop();
		if (now.first == n - 1 && now.second == m - 1) {
			break;
		}
		for (int i = 0; i < 4; i++) {
			int Y = now.first + _y[i];
			int X = now.second + _x[i];
			if (!visit[Y][X] && c[Y][X] == '1' && X >= 0 && Y >= 0&& X < m && Y < n) {
				visit[Y][X] = true;
				cnt.push(ans + 1);
				q.push(make_pair(Y, X));
			}
		}
	}
	return ans;
}