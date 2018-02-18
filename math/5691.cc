#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	while (1) {
		int A, B; cin >> A >> B;
		if (A == 0 && B == 0) break;
		cout << 2 * A - B << '\n';
	}
	return 0;
}