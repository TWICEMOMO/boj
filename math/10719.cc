#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int t;
int main() {
	cin >> t;
	for (int i = 0; i < t; i++) {
		int k; cin >> k;
		for (int j = 1;; j++) {
			if (j + j*j > k) {
				cout << --j << '\n';
				break;
			}
		}
	}
	return 0;
}