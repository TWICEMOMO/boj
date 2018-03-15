#include <iostream>
#include <string>
using namespace std;

int t;
string s[51], k;
int main() {
	cin >> t;
	t--;
	cin >> k;
	for (int i = 0; i < t; i++) {
		cin >> s[i];
	}
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < k.length(); j++) {
			if (k[j] != s[i][j]) {
				k[j] = '?';
			}
		}
	}
	cout << k;
	return 0;
}