#include <iostream>
using namespace std;

int t, Max;
int go(int s);
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> t;
	while (t--) {
		int n; cin >> n;
		Max = n;
		go(n);
		cout << Max << '\n';
	}
	return 0;
}
int go(int s) {
	if (s == 1) return 0;
	if (s % 2 == 0) s /= 2;
	else s = s * 3 + 1;
	if (Max < s) Max = s;
	go(s);
}