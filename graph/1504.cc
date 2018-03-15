#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
using namespace std;

#define MAX 200000007
int n, m;
vector<pair<int, int> >v[801];
int d[801];
bool visit[801];
void setGo(int s);
void go(int s);
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b, c; cin >> a >> b >> c;
		v[a].push_back(make_pair(b, c));
		v[b].push_back(make_pair(a, c));
	}
	int n1 = 0, n2 = 0;
	int a, b; cin >> a >> b;
	setGo(1); go(1);
	n1 += d[a];
	n2 += d[b];
	setGo(a); go(a);
	n1 += d[b];
	n2 += d[n];
	setGo(b); go(b);
	n2 += d[a];
	n1 += d[n];
	if (n1 >= MAX && n2 >= MAX) cout << -1;
	else if (n1 > n2) cout << n2;
	else cout << n1;
	return 0;
}
void go(int s) {
	priority_queue<pair<int, int>>pq;
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
void setGo(int s) {
	memset(visit, false, sizeof(visit));
	for (int i = 1; i <= n; i++) {
		d[i] = MAX;
	}
	d[s] = 0;
}