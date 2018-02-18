#include <iostream>
#include <cstring>
using namespace std;

int n, res;
char c[101];
int main() {
	cin >> n;
	cin >> c;
	for (int i = 0; i < n; i++) {
		res += (c[i] - '0');
	}
	cout << res << '\n';
	return 0;
}