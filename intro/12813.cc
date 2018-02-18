#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

string a, b;
int main() {
	cin >> a >> b;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < a.length(); j++) {
			int A = a[j] - '0';
			int B = b[j] - '0';
			if (i == 0) {
				int k = A&B;
				cout << k;
			}
			else if (i == 1) {
				int k = A | B;
				cout << k;
			}
			else if (i == 2) {
				int k = A^B;
				cout << k;
			}
			else if (i == 3) {
				if (A == 0)cout << 1;
				else cout << 0;
			}
			else if (i == 4) {
				if (B == 0)cout << 1;
				else cout << 0;
			}
		}
		cout << '\n';
	}
	return 0;
}