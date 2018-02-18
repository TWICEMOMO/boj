#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string s;
int a[4];
int main() {
	cin >> s;
	a[0] = 1;
	a[3] = 2;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'A') {
			swap(a[0], a[1]);
		}
		else if (s[i] == 'B') {
			swap(a[0], a[2]);
		}
		else if (s[i] == 'C') {
			swap(a[0], a[3]);
		}
		else if (s[i] == 'D') {
			swap(a[1], a[2]);
		}
		else if (s[i] == 'E') {
			swap(a[1], a[3]);
		}
		else {
			swap(a[2], a[3]);
		}
	}
	for (int i = 0; i < 4; i++) {
		if (a[i] == 1) cout << i + 1 << '\n';
	}
	for (int i = 0; i < 4; i++) {
		if (a[i] == 2) cout << i + 1 << '\n';
	}
	return 0;
}