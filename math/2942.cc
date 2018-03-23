#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;

int n, m;
int gcd(int y, int x);
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	int G = gcd(n, m);
	for (int i = 1; i <= G; i++) {
		if (n / i == 0 || m / i == 0) break;
		if (n%i == 0 && m%i == 0) {
			cout << i << " " << n / i << " " << m / i << '\n';
		}
	}
	return 0;
}
int gcd(int y, int x) {
	if (x == 0) return y;
	return gcd(x, y%x);
}