#include <iostream>
#include <algorithm>
using namespace std;

int a[21];
int main() {
	for (int i = 1; i < 21; i++) {
		a[i] = i;
	}
	for (int i = 0; i < 10; i++) {
		int l, r; cin >> l >> r;
		reverse(a + l, a + r + 1);
	}
	for (int i = 1; i < 21; i++) {
		cout << a[i] << " ";
	}
	return 0;
}