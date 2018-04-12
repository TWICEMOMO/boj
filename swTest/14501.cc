#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

int n, Max;
void go(int s, int sum);
vector<pair<int, int>>v;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b; cin >> a >> b;
		v.push_back(make_pair(a, b));
	}
	go(0,0);
	cout << Max << '\n';
	return 0;
}
void go(int s, int sum) {
	if (sum > Max) Max = sum;
	int now = s;
	if (s >= n) return;
	if (s + v[now].first <= n) {
		sum += v[now].second;
		s += v[now].first;
		go(s, sum);
		s -= v[now].first;
		sum -= v[now].second;
	}
	go(s + 1, sum);
}