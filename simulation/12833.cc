#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int a, b, c;
int main() {
	int k = 0;
	cin >> a >> b >> c;
	if (c % 2 == 0) k = (a^b) ^ b;
	else k = a^b;
	cout << k << '\n';
	return 0;
}