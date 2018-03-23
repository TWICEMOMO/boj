#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int a, b, d[4];
int main() {
	int len = 0;
	cin >> a >> b;
	int t = a;
	while (t != 0) {
		d[len] = t % 10;
		t /= 10;
		len++;
	}
	reverse(d, d + len);
	if (len*a > b) {
		int idx = 0;
		for (int i = 0; i < b; i++) {
			cout << d[idx++];
			if (idx == len) idx = 0;
		}
	}
	else {
		for (int i = 0; i < a; i++) {
			cout << a;
		}
	}
	return 0;
}