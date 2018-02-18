#include <iostream>
#include <string>
using namespace std;

int ans;
string s; 
int main() {
	cin >> s;
	for (int i = 0; i < s.length();i++) {
		if (i + 1 < s.length()) {
			if (s[i] == 'c') {
				if (s[i + 1] == '=') i++;
				else if (s[i + 1] == '-') i++;
			}
			else if (s[i] == 'd') {
				if (s[i + 1] == 'z'&&i + 2 < s.length()) {
					if (s[i + 2] == '=') i += 2;
				}
				else if (s[i + 1] == '-') i++;;
			}
			else if (s[i] == 'l') {
				if (s[i + 1] == 'j') i++;
			}
			else if (s[i] == 'n') {
				if (s[i + 1] == 'j') i++;
			}
			else if (s[i] == 's') {
				if (s[i + 1] == '=')  i++;
			}
			else if (s[i] == 'z') {
				if (s[i + 1] == '=') i++;
			}
		}
		ans++;
	}
	cout << ans;
	return 0;
}