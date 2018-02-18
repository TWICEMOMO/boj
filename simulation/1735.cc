#include <iostream>
using namespace std;

int a, b, c, d;
int gcd(int x, int y);
int main() {
	cin >> a >> b >> c >> d;
	int m, j1, j2;
	m = b*d;
	j1 = d*a;
	j2 = b*c;
	j1 = j1 + j2;
	int G = gcd(j1, m);
	cout << j1 / G << " " << m / G << '\n';
	return 0;
}

int gcd(int x, int y) {
	if(y == 0) return x;
	return gcd(y, x%y);
}