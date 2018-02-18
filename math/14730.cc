#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int t, ans;
vector<pair<int, int>> v;
int main() {
	cin >> t;
	while (t--) {
		int a, b; cin >> a >> b;
		v.push_back(make_pair(a, b));
	}
	for (int i = 0; i < v.size(); i++) {
		ans += (v[i].first*v[i].second);
	}
	cout << ans <<'\n';
	return 0;
}