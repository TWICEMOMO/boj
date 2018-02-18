#include <iostream>
#include <string>
#include <map>
using namespace std;

string s;
map<int, int> m;
int main() {
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if ('A' <= s[i] && s[i] <= 'Z') m[s[i] - 'A']++;
		else m[s[i] - 'a']++;
	}
	int Max = 0;
	bool flag = false;
	char ans;
	for (int i = 0; i < 26; i++) {
		if (Max == m[i]) flag = true;
		if (Max < m[i]) {
			Max = m[i];
			ans = 'A' + i;
			flag = false;
		}
	}
	if (flag) cout << '?' << '\n';
	else cout << ans << '\n';
	return 0;
}