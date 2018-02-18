#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int T;
int main() {
	cin >> T;
	while (T--) {
		int p = 0;
		int cnt = 1;
		int k; cin >> k;
		for (int i = 1; i <= k; i++) {
			p += cnt;
			cnt *= 2;
		}
		cout << p << '\n';
	}
	return 0;
}