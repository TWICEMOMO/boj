#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;

int N, M, ans, Min=1000;
int main() {
	for (int i = 0; i < 4; i++) {
		int k; cin >> k;
		ans += k;
		if (Min > k) Min = k;
	}
	ans -= Min;
	Min = 1000;
	for (int i = 0; i < 2; i++) {
		int k; cin >> k;
		ans += k;
		if (Min > k)Min = k;
	}
	ans -= Min;
	cout << ans << '\n';
	return 0;
}