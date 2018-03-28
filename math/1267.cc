#include <iostream>
#include <string>
using namespace std;

int t,y,m;
int main() {
	cin >> t;
	for (int i = 0; i < t; i++) {
		int k; cin >> k;
		y += (k / 30 + 1) * 10;
		m += (k / 60 + 1) * 15;
	}
	if (y > m) cout << "M "<< m << '\n';
	else if (y < m) cout << "Y " << y << '\n';
	else cout << "Y M " << m << '\n';
	return 0;
}