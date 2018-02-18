#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool flag;
string a;
int n, m;
int gcd(int n, int m);
int main() {
	cin >> a;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == ':') {
			flag = true;
			continue;
		}
		if (!flag) {
			n *= 10;
			n += (a[i] - '0');
		}
		else if (flag) {
			m *= 10;
			m += (a[i] - '0');
		}
	}
	int G = gcd(n, m);
	cout << n / G << ":" << m / G << '\n';
	return 0;
}
int gcd(int n, int m) {
	if (m == 0) return n;
	return gcd(m, n%m);
}