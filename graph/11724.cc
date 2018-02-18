#include <cstdio>
#include <vector>
using namespace std;

int n, m, ans;
bool visit[1001];
vector<int>v[1001];
void go(int k);
int main() {
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++) {
		int a, b; scanf("%d %d", &a, &b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for (int i = 1; i <= n; i++) {
		if (!visit[i]) {
			ans++;
			go(i);
		}
	}
	printf("%d\n", ans);
	return 0;
}
void go(int k) {
	visit[k] = true;
	for (int i = 0; i < v[k].size(); i++) {
		int now = v[k][i];
		if (!visit[now]) {
			go(now);
		}
	}
}