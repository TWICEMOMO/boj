#include <iostream>
#include <string>
#include <stack>
using namespace std;

int a[4], x,y,r;
int main() {
	for (int i = 0; i < 4; i++) {
		cin >> a[i];
	}
	cin >> x >> y >> r;
	for (int i = 0; i < 4; i++) {
		if (x == a[i]) {
			cout << i + 1 << '\n';
			return 0;
		}
	}
	cout << 0 << '\n';
	return 0;
}