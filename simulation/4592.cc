#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	while (1) {
		int a[26];
		int k; cin >> k;
		if (k == 0) break;
		for (int i = 0; i < k; i++) {
			cin >> a[i];
		}
		cout << a[0] << " ";
		for (int i = 1; i < k; i++) {
			if (a[i - 1] != a[i]) cout << a[i] << " ";
		}
		cout << "$" << '\n';
	}
	return 0;
}