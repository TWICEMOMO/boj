#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ans, cnt;
string s;
int main() {
	cin >> s;
	if (s[1] == 'x') {
		for (int i = s.length(); i > 2; i--) {
			if ('0' <= s[i - 1] && s[i - 1] <= '9')
				ans += (s[i - 1] - '0')*pow(16, cnt++);
			else
				ans += ((s[i - 1] - 'a')+10)*pow(16, cnt++);
		}
	}
	else if (s[0] == '0') {
		for (int i = s.length(); i > 1; i--) {
			ans += (s[i - 1] - '0')*pow(8, cnt++);
		}
	}
	else {
		for (int i = s.length(); i > 0; i--) {
			ans += (s[i - 1] - '0')*pow(10, cnt++);
		}
	}
	cout << ans;
}