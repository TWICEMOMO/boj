#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;

int N, ans;
int main() {
	cin.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++) {
		int m; cin >> m;
		if (i == 0) ans = m;
		else ans += (m - 1);
	}
	cout << ans << '\n';
	return 0;
}