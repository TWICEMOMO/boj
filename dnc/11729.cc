#include <iostream>
using namespace std;

int n;
void go(int k, int v, int x);
int main() {
	cin >> n;
	cout << (2 << (n-1)) - 1 << '\n';
	go(n, 1, 3);
	return 0;
}
void go(int k, int y, int x) {
	if (k == 0) return;
	go(k - 1, y, 6 - y - x);
	cout << y <<" "<< x << '\n';
	go(k - 1, 6 - x - y, x);
}