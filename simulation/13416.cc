#include <iostream>
#include <vector>
using namespace std;

int t;
int main() {
	cin >> t;
	for (int i = 0; i < t; i++) {
		int k; cin >> k;
		int Max = 0;
		int ans = 0;
		for (int j = 0; j < k; j++) {
			Max = 0;
			for (int c = 0; c < 3; c++) {
				int n; cin >> n;
				if (Max < n) Max = n;
			}
			ans += Max;
		}
		cout << ans << '\n';
	}
	return 0;
}