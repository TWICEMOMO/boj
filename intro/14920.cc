#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int n;
int main() {
	cin >> n;
	int i, t;
	for (i = 1, t = n;; i++) {
		if (t == 1) break;
		if (t % 2 == 0) {
			t = t / 2;
		}
		else {
			t = 3 * t + 1;
		}
	}
	cout << i << '\n';
	return 0;
}