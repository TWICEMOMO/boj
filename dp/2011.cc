#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

string s;
int d[5001];
int main() {
	cin >> s;
	s = " " + s;
	d[0] = 1;
	for (int i = 1; i <= s.length(); i++) {
		int x = s[i] - '0';
		if (1 <= x && x <= 9) {
			d[i] += d[i - 1];
			d[i] %= 1000000;
		}
		if (i == 1) continue;
		if (s[i - 1] == '0') continue;
		x = (s[i - 1] - '0') * 10 + (s[i] - '0');
		if (10 <= x && x <= 26) {
			d[i] += d[i - 2];
			d[i] %= 1000000;
		}
	}
	printf("%d\n", d[s.length() - 1]);
	return 0;
}