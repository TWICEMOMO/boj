#include <iostream>
#include <string>
#include <stack>
#include <map>
#include <cmath>
using namespace std;

int n;
int main() {
	cin >> n;
	while (n--) {
		int cnt = 0;
		int t; cin >> t;
		for (int i = 10; i < t; i *= 10) {
			int a = t % i;
			a = a / (i / 10);
			if (a >= 5) {
				t -= a*pow(10, cnt++);
				t += pow(10, cnt);
			}
			else {
				t -= a*pow(10, cnt++);
			}
		}
		cout << t << '\n';
	}
	return 0;
}