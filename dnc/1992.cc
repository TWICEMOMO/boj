#include <iostream>
using namespace std;

int n;
void go(int y, int x, int s);
bool chk(int y, int x, int s);
char c[65][65];
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}
	go(0, 0, n);
	return 0;
}
void go(int y, int x, int s) {
	if (s == 0) return;
	if (chk(y, x, s)) {
		cout << c[y][x];
		return;
	}
	int ss = s / 2;
	cout << "(";
	go (y, x, ss);
	go(y, x + ss, ss);
	go(y + ss, x, ss);
	go(y + ss, x + ss, ss);
	cout << ")";
}
bool chk(int y, int x, int s) {
	char q = c[y][x];
	for (int i = y; i < y + s; i++) {
		for (int j = x; j < x + s; j++) {
			if (q != c[i][j]) return false;
		}
	}
	return true;
}