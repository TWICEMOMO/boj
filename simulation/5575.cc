#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	for (int i = 0; i < 3; i++) {
		int a, b, c, d, e, f;
		cin >> a >> b >> c >> d >> e >> f;
		f -= c;
		if (f < 0) {
			f += 60;
			b++;
		}
		e -= b;
		if (e < 0) {
			e += 60;
			a++;
		}
		d -= a;
		cout << d << " " << e << " " << f << " " << '\n';
	}
	return 0;
}