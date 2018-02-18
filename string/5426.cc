#include <iostream>
#include <string>
#include <stack>
#include <map>
#include <cmath>
using namespace std;

int n;
int main() {
	cin >> n;
	while (n--) {
		string s; cin >> s;
		int t = sqrt(s.length());
		for (int i = t - 1; i >= 0; i--) {
			for (int j = i; j < s.length(); j += t) {
				cout << s[j];
			}
		}
		cout << '\n';
	}
	return 0;
}