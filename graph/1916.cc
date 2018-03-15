#include <iostream>
#include <queue>
#include <vector>
using namespace std;

#define MAX 1000000007
int n, m;
vector<pair<int, int> >v[20001];
int d[20001];
bool visit[20001];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b, c; cin >> a >> b >> c;
		v[a].push_back(make_pair(b, c));
	}
	for (int i = 1; i <= n; i++) {
		d[i] = MAX;
	}
	int a, b; cin >> a >> b;
	d[a] = 0;
	priority_queue<pair<int, int>>pq;
	pq.push(make_pair(0, a));
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
	cout << d[b] << '\n';
	return 0;
}
