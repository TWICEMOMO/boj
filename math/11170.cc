#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int T;
int main() {
	cin.tie(0);
	cin >> T;
	while (T--) {
		int ans = 0;
		int a, b; cin >> a >> b;
		for (int i = a; i <= b; i++) {
			if (i == 0) {
				ans++;
				continue;
			}
			int t = i;
			while (t!=0) {
				int k = t % 10;
				if (k == 0) ans++;
				t /= 10;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}