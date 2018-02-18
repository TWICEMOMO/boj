#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

double a, b;
int main() {
	cin >> a;
	while (1) {
		cin >> b;
		if (b == 999) break;
		cout << fixed;
		cout.precision(2);
		cout << b - a << '\n';
		a = b;
	}
	return 0;
}