#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

string a, b;
int main() {
	cin >> a >> b;
	int al = a.length();
	int bl = b.length();
	if (a.length() > b.length()) {
		for (int i = 0; i < al - bl; i++) {
			b = '0' + b;
		}
	}
	else if (a.length() <= b.length()) {
		for (int i = 0; i < bl - al; i++) {
			a = '0' + a;
		}
	}
	for (int i = 0; i < a.length(); i++) {
		cout << (a[i] - '0') + (b[i] - '0');
	}
	return 0;
}