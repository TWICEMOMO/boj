#include <iostream>
#include <vector>
using namespace std;

#define MAX 1000000007
int n, m;
int d[501];
vector<pair<int, int>>v[501];
int main() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b, c; cin >> a >> b >> c;
		v[a].push_back(make_pair(b, c));
	}
	for (int i = 0; i <= n; i++) {
		d[i] = MAX;
	}
	bool cycle = false;
	d[1] = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <=n; j++) {
			for (int k = 0; k < v[j].size(); k++) {
				int next = v[j][k].first;
				if (d[j] != MAX && d[next] > d[j] + v[j][k].second) {
					d[next] = d[j] + v[j][k].second;
					if (i == n) cycle = true;
				}
			}
		}
	}
	if (cycle) cout << -1;
	else {
		for (int i = 2; i <= n; i++) {
			if (d[i] == MAX) cout << -1;
			else cout << d[i];
			cout << '\n';
		}
	}
	return 0;
}