#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int n;
int main() {
	cin >> n;
	while (n--) {
		int cnt, ans;
		ans = cnt = 0;
		string s; cin >> s;
		reverse(s.begin(), s.end());
		for (int i = 0; i < s.length(); i++) {
			ans += (s[i] - '0')*pow(2, cnt++);
		}
		cout << ans << '\n';
	}
	return 0;
}