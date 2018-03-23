#include <iostream>
#include <cstdio>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <map>
#include <set>
#include <cstring>
#include <string>
#include <cmath>
using namespace std;

bool visit[101];
vector<int>v[101];
int n, x, y, m, res;
int dfs(int s);
int main() {
	cin >> n >> x >> y >> m;
	for (int i = 0; i < m; i++) {
		int a, b; cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	cout << dfs(x);
	return 0;
}
int dfs(int s) {
	visit[s] = true;
	queue<pair<int, int>>q;
	q.push(make_pair(s, 0));

	while (!q.empty()) {
		pair<int, int>now = q.front();
		q.pop();
		if (now.first == y) {
			return now.second;
		}
		for (int i = 0; i < v[now.first].size(); i++) {
			int next = v[now.first][i];
			if (!visit[next]) {
				visit[next] = true;
				q.push(make_pair(next, now.second + 1));
			}
		}
	}
	return -1;
}