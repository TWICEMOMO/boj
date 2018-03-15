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

int n, idx;
deque<pair<int, int>>dq;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int k;  cin >> k;
		dq.push_back(make_pair(k, i + 1));
	}
	for (int i = 0; i < n; i++) {
		pair<int, int> now = dq.front();
		cout << now.second << " ";
		dq.pop_front();
		if (dq.size() == 0) break;
		if (now.first > 0) {
			for (int k = 1; k < now.first; k++) {
				auto p = dq.front();
				dq.pop_front();
				dq.push_back(p);
			}
		}
		else if (now.first < 0) {
			for (int k = 0; k < -now.first; k++) {
				auto p = dq.back();
				dq.pop_back();
				dq.push_front(p);
			}
		}
	}
	return 0;
}