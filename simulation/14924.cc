#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int s, t, d;
int main() {
	cin >> s >> t >> d;
	int k = d / (s * 2);
	cout << k*t << '\n';
	return 0;
}