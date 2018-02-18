#include <iostream>
#include <string>
using namespace std;

string s;
int a[4] = { 0,1,0,0 };
int main() {
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'A') {
			int tmp = a[1];
			a[1] = a[2];
			a[2] = tmp;
		}
		else if (s[i] == 'B') {
			int tmp = a[2];
			a[2] = a[3];
			a[3] = tmp;
		}
		else {
			int tmp = a[1];
			a[1] = a[3];
			a[3] = tmp;
		}
	}
	for (int i = 1; i < 4; i++) {
		if (a[i] == 1) {
			cout << i << '\n';
			break;
		}
	}
	return 0;
}