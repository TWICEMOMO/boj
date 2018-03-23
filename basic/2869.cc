#include <iostream>
using namespace std;

int cnt, a, b, c, sum;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> a >> b >> c;
	c -= b;
	if (c % (a - b) != 0) cout << c / (a - b) + 1;
	else cout << c / (a - b);
	return 0;
}