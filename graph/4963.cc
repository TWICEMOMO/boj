#include <cstdio>
#include <cstring>
using namespace std;


int y, x, a[51][51];
int _x[] = { -1,-1,-1,0,0,1,1,1 };
int _y[] = { -1,0,1,-1,1,-1,0,1 };
bool visit[51][51];
void go(int h, int w);
int main() {
	while (1) {
		int ans = 0;
		memset(visit, false, sizeof(visit));
		scanf("%d %d", &x, &y);
		if (x == 0 && y == 0) break;
		for (int i = 0; i < y; i++) {
			for (int j = 0; j < x; j++) {
				scanf("%d", &a[i][j]);
			}
		}
		for (int i = 0; i < y; i++) {
			for (int j = 0; j < x; j++) {
				if (!visit[i][j] && a[i][j] == 1) {
					ans++;
					go(i, j);
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
void go(int h, int w) {
	visit[h][w] = true;
	for (int i = 0; i < 8; i++) {
		int X = w + _x[i];
		int Y = h + _y[i];
		if (!visit[Y][X] && a[Y][X] == 1 && X >= 0 && Y >= 0 && X < x && Y < y) {
			go(Y, X);
		}
	}
}