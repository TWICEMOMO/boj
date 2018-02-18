#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int N;
string s;
char c[26];
int main() {
	cin >> N;

	cin.ignore();
	for (int i = 0; i < N; i++) {
		getline(cin, s);
		for (int j = 0; j < s.length(); j++) {
			if ('A' <= s[j] && s[j] <= 'Z') c[s[j] - 'A']++;
			else if ('a' <= s[j] && s[j] <= 'z') c[s[j] - 'a']++;
		}
		bool flag = true;
		for (int j = 0; j < 26; j++) {
			if (c[j] == 0 && flag) {
				flag = false;
				cout << "missing ";
			}
			if (c[j] == 0 && !flag) {
				cout << char('a' + j);
			}
			c[j] = 0;
		}
		if (flag) cout << "pangram";
		cout << '\n';
	}
	return 0;
}