#include <cstdio>
#include <cstring>
#include <vector>
using namespace std;

int k;
int visit[1001];
vector<int>vec[1001];
void dfs(int s);
int main() {
	scanf("%d", &k);
	while (k--) {
		int v, ans = 0;  scanf("%d", &v);
		memset(visit, 0, sizeof(visit));
		for (int i = 1; i <= v; i++) {
			int a; scanf("%d", &a);
			vec[i].push_back(a);
		}
		for (int i = 1; i <= v; i++) {
			if (!visit[i]) {
				dfs(i);
				ans++;
			}
		}
		printf("%d\n", ans);
		for (int i = 0; i <= 1001; i++) {
			vec[i].clear();
		}
	}
	return 0;
}
void dfs(int s) {
	visit[s] = true;
	for (int i = 0; i < vec[s].size(); i++) {
		int now = vec[s][i];
		if (!visit[now]) {
			dfs(now);
		}
	}
}