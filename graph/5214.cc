#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool visit[101011];
vector<int>v[101011];
int N, K, M, a[101011];
int main() {
	cin >> N >> K >> M;
	for (int i = 1; i <= M; i++) {
		for (int j = 1; j <= K; j++) {
			int a; cin >> a;
			v[a].push_back(100000 + i);
			v[100000 + i].push_back(a);
		}
	}
	queue<pair<int, int> > q;
	q.push(make_pair(1, 1));
	while (!q.empty()) {
		int now = q.front().first;
		int cnt = q.front().second;
		q.pop();
		if (visit[now]) continue;
		visit[now] = true;
		for (int i = 0; i < v[now].size(); i++) {
			int next = v[now][i];
			if (visit[next]) continue;
			if (next == N) {
				cout << cnt + 1 << '\n';
				return 0;
			}
			if (next > 100000) {
				q.push(make_pair(next, cnt));
			}
			else {
				q.push(make_pair(next, cnt+1));
			}
		}
	}
	cout << -1 << '\n';
	return 0;
}