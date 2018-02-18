#include <cstdio>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;

int n,m,s;
bool visit[1001];
void dfs(int v);
void bfs(int v);
vector <int> vec[1001];
int main() {
	scanf("%d %d %d", &n, &m, &s);
	for (int i = 0; i < m; i++) {
		int a, b; scanf("%d %d", &a, &b);
		vec[a].push_back(b);
		vec[b].push_back(a);
	}
	for (int i = 0; i < n; i++) {
		sort(vec[i].begin(), vec[i].end());
	}
	dfs(s);
	printf("\n");
	memset(visit, false, sizeof(visit));
	bfs(s);
	printf("\n");
	return 0;
}
void dfs(int v) {
	printf("%d ", v);
	visit[v] = true;
	for (int i = 0; i < vec[v].size(); i++) {
		int k = vec[v][i];
		if (!visit[k]) {
			dfs(k);
		}
	}
}
void bfs(int v) {
	queue<int>q;
	q.push(v);
	visit[v] = true;
	while (!q.empty()) {
		int now = q.front();
		printf("%d ", now);
		q.pop();
		for (int i = 0; i < vec[now].size(); i++) {
			int k = vec[now][i];
			if (!visit[k]) {
				visit[k] = true;
				q.push(k);
			}
		}
	}
}