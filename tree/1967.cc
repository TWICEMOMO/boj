#include <cstdio>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

void bfs(int now);
int n, Max, x;
bool visit[100001];
vector<pair<int,int> >v[100001];
int main() {
	scanf("%d", &n);
	for (int i = 1; i < n; i++) {
		int a, b, c; scanf("%d %d %d", &a, &b, &c);
			v[a].push_back(make_pair(b, c));
			v[b].push_back(make_pair(a, c));
	}
	memset(visit, false, sizeof(visit));
	bfs(1);
	memset(visit, false, sizeof(visit));
	bfs(x);
	printf("%d\n", Max);
	return 0;
}
void bfs(int now) {
	Max = 0;
	visit[now] = true;
	queue<pair<int, int> >q;
	q.push(make_pair(now, 0));
	while (!q.empty()) {
		pair<int, int> cur = q.front();
		if (Max < cur.second) {
			x = cur.first;
			Max = cur.second;
		}
		q.pop();
		for (int i = 0; i < v[cur.first].size(); i++) {
			int k = v[cur.first][i].first;
			if (!visit[k]) {
				visit[k] = true;
				q.push(make_pair(k, cur.second + v[cur.first][i].second));
			}
		}
	}
}