#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;

string s, now;
int main() {
	cin >> s;
	if (s.length() % 3 == 1) s = "00" + s;
	else if (s.length() % 3 == 2) s = '0' + s;
	for (int i = 0; i < s.length(); i += 3) {
		now = s[i];
		now += s[i + 1];
		now += s[i + 2];
		if (now == "000") printf("0");
		else if (now == "001") printf("1");
		else if (now == "010") printf("2");
		else if (now == "011") printf("3");
		else if (now == "100") printf("4");
		else if (now == "101") printf("5");
		else if (now == "110") printf("6");
		else if (now == "111") printf("7");
	}
	return 0;
}