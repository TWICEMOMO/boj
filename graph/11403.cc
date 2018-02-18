#include <iostream>
#include <cstring>
using namespace std;

bool visit[101];
int N, a[101][101], d[101][101];
void dfs(int s, int now);
int main() {
	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 1; i <= N; i++) {
		memset(visit, false, sizeof(visit));
		dfs(i,i);
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cout << d[i][j] << ' ';
		}
		cout << '\n';
	}
	return 0;
}
void dfs(int s, int now) {
	if (visit[now]) return;
	visit[now] = true;
	for (int i = 1; i <= N; i++) {
		if (visit[i] && a[now][i] == 1 && s == i) {
			d[s][i] = 1;
		}
		if (visit[i] || a[now][i]==0) continue;
		if (1==a[now][i]) {
			d[s][i] = 1;
			dfs(s, i);
		}
	}
}