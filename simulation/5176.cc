#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int k;
int main() {
	cin >> k;
	while (k--) {
		int ans = 0;
		int a, b; cin >> a >> b;
		map<int, int>m;
		for (int i = 0; i < a; i++) {
			int k; cin >> k;
			m[k]++;
			if (m[k] > 1) ans++;
		}
		cout << ans << '\n';
	}
	return 0;
}