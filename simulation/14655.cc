#include <iostream>
using namespace std;

int n, r1, r2;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int k; cin >> k;
		if (k < 0) k = -k;
		r1 += k;
	}
	for (int j = 0; j < n; j++) {
		int k; cin >> k;
		if (k > 0) k = -k;
		r2 += k;
	}
	cout << r1 - r2 << '\n';
	return 0;
}