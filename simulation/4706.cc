#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

double c = 2.997;
int main() {
	c *= c;
	while (1) {
		double a, b; cin >> a >> b;
		if (a == 0 && b == 0) break;
		b *= b;
		a *= a;
		double k = 1.0;
		double v = sqrt(((a-b)/a));
		cout << fixed;
		cout.precision(3);
		cout << v<<'\n';
	}
	return 0;
}