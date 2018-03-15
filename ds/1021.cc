#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <stack>
#include <queue>
#include <list>
#include <set>
#include <map>
#include <vector>
#include <deque>
using namespace std;

int n, m, ans;
deque<int>dq;
int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		dq.push_back(i);
	}
	while (m--) {
		int k; cin >> k;
		if (dq.front() == k) {
			dq.pop_front();
		}
		else {
			int cnt = 0;
			deque<int>::iterator iter = dq.begin();
			for (iter; iter != dq.end(); ++iter) {
				cnt++;
				if (*iter == k) {
					break;
				}
			}
			if (cnt <= dq.size() - cnt + 1) {
				while (1) {
					int now = dq.front();
					dq.pop_front();
					dq.push_back(now);
					ans++;
					if (dq.front() == k) {
						dq.pop_front();
						break;
					}
				}
			}
			else {
				while (1) {
					int now = dq.back();
					dq.pop_back();
					dq.push_front(now);
					ans++;
					if (dq.front() == k) {
						dq.pop_front();
						break;
					}
				}
			}
		}
	}
	cout << ans << '\n';
	return 0;
}