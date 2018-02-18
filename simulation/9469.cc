#include <iostream>
using namespace std;

int t;
int main() {
	cin >> t;
	for (int i = 0; i < t; i++) {
		int k; cin >> k;
		double a, b, c, d;
		cin >> a >> b >> c >> d;
		cout<<fixed;
		cout.precision(2);
		cout << k << " " << (a / (b + c))*d << '\n';
	}
	return 0;
}