#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int t, Max;
int main() {
	cin >> t;
	for (int i = 0; i <= t / 2; i++) {
		int k = (i + 1)*((t - i) + 1);
		if (Max < k) Max = k;
	}
	cout << Max << '\n';
	return 0;
}