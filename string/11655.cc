#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

string s;
int main() {
	getline(cin, s);
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			if (s[i] + 13 > 'z') {
				s[i] = s[i] + 12 - 'z' + 'a';
				printf("%c", s[i]);
			}
			else printf("%c", s[i]+13);
		}
		else if (s[i] >= 'A' && s[i] <= 'Z') {
			if (s[i] + 13 > 'Z') {
				s[i] = s[i] + 12 - 'Z' + 'A';
				printf("%c", s[i]);
			}
			else printf("%c", s[i]+13);
		}
		else printf("%c", s[i]);
	}
	return 0;
}