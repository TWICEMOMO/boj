#include <iostream>
using namespace std;

int n, k;
int main() {
	cin >> n >> k;
	int Nsize, Ksize;
	if (n % 4 == 0) {
		Nsize = n / 4;
		n = 4;
	}
	else {
		Nsize = n / 4 + 1;
		n = n % 4;
	}
	if (k % 4 == 0) {
		Ksize = k / 4;
		k = 4;
	}
	else {
		Ksize = k / 4 + 1;
		k = k % 4;
	}
	int ans1 = (Nsize - Ksize);
	if (ans1 < 0) ans1 = -ans1;
	int ans2 = n - k;
	if (ans2 < 0) ans2 = -ans2;
	cout << ans2 + ans1 << '\n';
	return 0;
}