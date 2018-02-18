#include <iostream>
using namespace std;

int a[101];
int main() {
	for (int i = 1; i < 101; i++) {
		a[i] += a[i - 1] + i*i;
	}
	while (1) {
		int n; cin >> n;
		if (n == 0) break;
		cout << a[n] << '\n';
	}
	return 0;
}