#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int n, Max, ans;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int k; cin >> k;
		if (Max < k) Max = k;
		ans += k;
	}
	cout << ans - Max << '\n';
	return 0;
}