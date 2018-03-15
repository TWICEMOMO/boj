#include <iostream>
using namespace std;

int n, a[51];
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	if (a[1] - a[0] == a[2] - a[1]) cout << a[n - 1] + (a[1] - a[0]);
	else cout << a[n - 1] * (a[1]/a[0]);
	return 0;
}