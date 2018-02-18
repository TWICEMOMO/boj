#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int main() {
	cin.tie(0);
	while (1) {
		string k; cin >> k;
		int e = 0, o = 0;
		if (k == "#") break;
		for (int i = 0; i < k.length(); i++) {
			if (k[i] == '1') e++;
			else if (k[i] == '0') o++;
		}
		if (k[k.length() - 1] == 'e') {
			if (e % 2 != 0) k[k.length() - 1] = '1';
			else k[k.length() - 1] = '0';
		}
		else {
			if (e % 2 != 0) k[k.length() - 1] = '0';
			else k[k.length() - 1] = '1';
		}
		cout << k << '\n';
	}
	return 0;
}