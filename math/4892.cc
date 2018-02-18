#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	for (int i = 1;; i++) {
		int n; cin >> n;
		if (n == 0) break;
		int n1 = 3 * n;
		int n2, n3;
		if (n1 % 2 == 0) n2 = n1 / 2;
		else n2 = (n1 + 1) / 2;
		n3 = 3 * n2;
		int n4 = n3 / 9;
		if (n1 % 2 == 0) cout << i << ". even " << n/ 2;
		else cout << i << ". odd " << (n - 1) / 2;
		cout << '\n';
	}
	return 0;
}