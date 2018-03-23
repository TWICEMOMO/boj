#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int a, b, c, d;
int main() {
	cin >> a >> b >> c >> d;
	if (a + d > b + c) cout << b + c;
	else cout << a + d;
	return 0;
}