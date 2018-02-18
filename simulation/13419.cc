#include <iostream>
#include <string>
using namespace std;

int t;
int main() {
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		string s1 = "";
		string s2 = "";
		for (int i = 0; i < s.length(); i++) {
			if (i % 2 == 0) s1 += s[i];
			else s2 += s[i];
		}
		if (s.length() % 2 == 0) {
			cout << s1 << '\n' << s2 << '\n';
		}
		else {
			string tmp = s1;
			s1 += s2;
			s2 += tmp;
			cout << s1 << '\n' << s2 << '\n';
		}
	}
	return 0;
}