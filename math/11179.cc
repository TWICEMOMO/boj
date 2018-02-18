#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string p;
int N, ans, cnt;
int main() {
	cin >> N;
	while (N != 0) {
		int k = N % 2;
		if (k == 1) p += '1';
		else p += '0';
		N /= 2;
	}
	for (int i = p.length() - 1; i >= 0; i--) {
		ans += (p[i] - '0')*pow(2, cnt++);
	}
	cout << ans << endl;
	return 0;
}