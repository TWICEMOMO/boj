#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int t;
int main() {
	cin >> t;
	while (t--) {
		int cnt = 0;
		int a, b; cin >> a >> b;
		for (int i = 0; i < a; i++) {
			double v, f, c; cin >> v >> f >> c;
			double U = (v / c)*f;
			if (U >= b) cnt++;
		}
		cout << cnt << '\n';
	}
	return 0;
}