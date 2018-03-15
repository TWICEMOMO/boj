#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;

int n, m, x, d[1001], res[1001];
vector<pair<int, int>>v[1001];
bool visit[1001];
void go(int s);
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m >> x;
	for (int i = 0; i < m; i++) {
		int a, b, c; cin >> a >> b >> c;
		v[a].push_back((make_pair(b, c)));
	}
	for (int i = 1; i <= n; i++) {
		go(i);
		if (i == x) {
			for (int j = 1; j <= n; j++) {
				res[j] += d[j];
			}
		}
		else {
			res[i] += d[x];
		}
	}
	res[x] = 0;
	sort(res, res + n + 1);
	cout << res[n] << '\n';
	return 0;
}
void go(int s) {
	for (int i = 1; i <= n; i++) {
		visit[i] = false;
		d[i] = 1000000007;
	}
	priority_queue<pair<int, int>>pq;
	d[s] = 0;
	pq.push(make_pair(0, s));
	while (!pq.empty()) {
		pair<int, int>now = pq.top();
		pq.pop();

		if (visit[now.second]) continue;
		visit[now.second] = true;
		for (int i = 0; i < v[now.second].size(); i++) {
			int next = v[now.second][i].first;
			if (d[next] > d[now.second] + v[now.second][i].second) {
				d[next] = d[now.second] + v[now.second][i].second;
				pq.push(make_pair(-d[next], next));
			}
		}
	}
}