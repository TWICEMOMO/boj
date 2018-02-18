#include <iostream>
#include <string>
#include <stack>
#include <map>
using namespace std;

int main() {
	while (1) {
		int cnt = 0;
		int a, b, c, d; cin >> a >> b >> c >> d;
		if (a + b + c + d == 0) break;
		while (1) {
			if (a == b && b == c && c == d) break;
			int t = a;
			a -= b;
			b -= c;
			c -= d;
			d -= t;
			if (a < 0) a = -a;
			if (b < 0) b = -b;
			if (c < 0) c = -c;
			if (d < 0) d = -d;
			cnt++;
		}
		cout << cnt << '\n';
	}
	return 0;
}