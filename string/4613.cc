#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int main() {
	while (1) {
		string s;
		getline(cin, s);
		if (s == "#") break;
		int ans = 0;
		for (int i = 0; i < s.length(); i++) {
			if ('A' <= s[i] && s[i] <= 'Z') {
				ans += (s[i] - 'A' + 1)*(i + 1);
			}
		}
		cout << ans << '\n';
	}
	return 0;
}