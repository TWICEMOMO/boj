#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int n;
string s;
int main() {
	cin >> n;
	while (n!=0) {
		int k = n % 9;
		s += (k + '0');
		n /= 9;
	}
	reverse(s.begin(), s.end());
	cout << s << '\n';
	return 0;
}