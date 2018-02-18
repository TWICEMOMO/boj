#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
using namespace std;

int d[26];
string s;
int main() {
	cin >> s;
	memset(d, -1, sizeof(d));
	for (int i = 0; i < s.length(); i++) {
		if (d[s[i] - 'a'] == -1) d[s[i] - 'a'] = i;
	}
	for (int i = 'a'; i <= 'z'; i++) {
		printf("%d ", d[i - 'a']);
	}
	return 0;
}