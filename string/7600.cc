#include <iostream>
#include <string>
#include <stack>
#include <map>
using namespace std;

string s;
int main() {
	while (1) {
		map<int, int>m;
		int ans = 0;
		getline(cin, s);
		if (s == "#") break;
		for (int i = 0; i < s.length(); i++) {
			if ('A' <= s[i] && s[i] <= 'Z') m[s[i] - 'A']++;
			if ('a' <= s[i] && s[i] <= 'z') m[s[i] - 'a']++;
		}
		for (int i = 0; i < 26; i++) {
			if (m[i] != 0) ans++;
		}
		cout << ans << '\n';
	}
	return 0;
}