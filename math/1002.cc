#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <cmath>
using namespace std;

int n;
int abs(int x);
double dis(double a, double b);
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x1, y1, r1, x2, y2, r2; 
		cin >> x1 >> y1 >> r1 >> x2>>y2 >> r2;
		double T = dis(x1 - x2, y1 - y2);
		double a = (double)abs(r1 - r2);
		double b = (double)abs(r1 + r2);
		if (x1 == x2 && y1 == y2 && r1 == r2) {
			cout << -1 << '\n';
			continue;
		}
		if (T - a > 0.0 && b - T > 0.0) cout << 2 << "\n";
		else if (b == T || T == a) cout << 1 << '\n';
		else cout << 0 << '\n';
	}
}
int abs(int x) {
	if (x < 0) return-x;
	return x;
}
double dis(double a, double b) {
	return sqrt(pow(a, 2) + pow(b, 2));
}