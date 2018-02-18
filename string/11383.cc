#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string s[10], ss[10];
int n, k;
int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	for (int j = 0; j < n; j++) {
		cin >> ss[j];
	}
	for (int i = 0; i < n; i++) {
		string tmp = "";
		for (int j = 0; j < s[i].length(); j++) {
			tmp += s[i][j];
			tmp += s[i][j];
		}
		s[i] = tmp;
	}
	bool flag = true;
	for (int i = 0; i < n; i++) {
		if (s[i] != ss[i]) flag = false;
	}
	if (flag) cout << "Eyfa" << '\n';
	else cout << "Not Eyfa" << '\n';
	return 0;
}