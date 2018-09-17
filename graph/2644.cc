#include <iostream>
#include <queue>
#include <vector>
using namespace std;

queue<pair<int,int>>q;
bool visit[101];
vector<int>v[101];
int n, a, b, m, res;
int main() {
	cin >> n >> a >> b >> m;
	for (int i = 0; i < m; i++) {
		int y, x; cin >> y >> x;
		v[y].push_back(x);
		v[x].push_back(y);
	}
	q.push(make_pair(a,0));
	while (!q.empty()) {
		int now = q.front().first;
		int cnt = q.front().second;
		q.pop();
		if (now == b) {
			res = cnt;
			break;
		}
		if (visit[now]) continue;
		visit[now] = true;
		for (int i = 0; i < v[now].size(); i++) {
			int next = v[now][i];
			if (visit[next]) continue;
			q.push(make_pair(next,cnt+1));
		}
	}
	if (res) cout << res << '\n';
	else cout << -1 << '\n';
	return 0;
}