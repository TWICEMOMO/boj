#include <cstdio>
#include <queue>
using namespace std;

queue < pair<int, int> >q;
int y, x, d[1001][1001];
int _y[] = { 0,0,1,-1 };
int _x[] = { 1,-1,0,0 };
bool visit[1001][1001];
int main() {
	scanf("%d %d", &x, &y);
	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			scanf("%d", &d[i][j]);
			if (d[i][j] == 1) {
				visit[i][j] = true;
				q.push(make_pair(i, j));
			}
		}
	}

	if (q.empty()) {
		printf("0\n");
		return 0;
	}
	while (!q.empty()) {
		pair<int, int>now = q.front();
		q.pop(); 
		for (int i = 0; i < 4; i++) {
			int Y = now.first + _y[i];
			int X = now.second + _x[i];
			if (!visit[Y][X] && d[Y][X] == 0 && X >= 0 && Y >= 0 && X < x && Y < y) {
				visit[Y][X] = true;
				q.push(make_pair(Y, X));
				d[Y][X] = d[now.first][now.second] + 1;
			}
		}
	}
	bool flag = false;
	int Max = 0;
	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			if (d[i][j] == 0) flag =true;
			if (Max < d[i][j]) Max = d[i][j];
		}
	}
	if (flag) printf("-1\n");
	else printf("%d\n", --Max);
	return 0;
}