#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int k; cin >> k;
	while (1) {
		string s; cin >> s;
		if (s == "+") {
			int c; cin >> c;
			k += c;
		}
		else if (s == "-") {
			int c; cin >> c;
			k -= c;
		}
		else if (s == "*") {
			int c; cin >> c;
			k *= c;
		}
		else if (s == "/") {
			int c; cin >> c;
			k /= c;
		}
		else if (s == "=")break;
	}
	cout << k << '\n';
	return 0;
}