#include <iostream>
using namespace std;

int t, Max;
int go(int s);
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	while (1) {
		int k, res = 0, pos = 1, c = 1; cin >> k;
		if (k == 0) break;
		for (int i = k; i != 0; i /= 10) {
			res += ((i % 10)*pos);
			pos *= ++c;
		}
		cout << res << '\n';
	}
	return 0;
}