#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;

long long a, b;
long long  go(long long x);
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> a >> b;
	long long n;
	if (a >= 0 && b >= 0) {
		n = go(go(b) - go(a)) + 1;
	}
	else if (a < 0 && b < 0) {
		n = go(go(b) - go(a)) + 1;
	}
	else if (a >= 0 && b < 0) {
		n = go(b) + 1 + a;
	}
	else if (a < 0 && b>=0) {
		n = go(a) +1 + b;
	}
	cout << n*(a + b) / 2;
	return 0;
}
long long go(long long x) {
	if (x < 0) return -x;
	return x;
}