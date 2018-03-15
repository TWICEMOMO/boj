#include <iostream>
#include <string>
using namespace std;

int n, f;
int main() {
	cin >> n >> f;
	n = n - n % 100;
	while (1) {
		if (n%f == 0) break;
		n += 1;
	}
	if (n % 100 < 10) cout << 0 << n % 100;
	else cout << n % 100;
	return 0;
}