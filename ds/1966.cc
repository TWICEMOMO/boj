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

int t;
int main() {
	cin >> t;
	while (t--) {
		int n, m; cin >> n >> m;
		queue<pair<int, int>>q;
		int a[101];
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			int k; cin >> k;
			a[i] = k;
			q.push(make_pair(k, i));
		}
		sort(a, a + n);
		while (!q.empty()) {
			pair<int, int>now = q.front();
			q.pop();
			if (a[n - 1] == now.first) {
				n--;
				cnt++;
				if (m == now.second) break;
				continue;
			}
			q.push(now);
		}
		cout << cnt << '\n';
	}
	return 0;
}