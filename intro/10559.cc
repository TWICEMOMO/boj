#include <iostream>
using namespace std;

int main() {
	while (1) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		if (a == 0 && b == 0 && c == 0 && d == 0) break;
		int A = d - a;
		int B = c - b;
		if (A < 0) A -= A;
		if (B < 0) B -= B;
		cout << B << " " << A << '\n';
	}
	return 0;
}