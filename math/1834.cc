#include <iostream>
using namespace std;

long long n, res;
int main() {
	cin >> n;
	for (long long i = 1; i < n; i++) {
		res += (n*i + i);
	}
	cout << res << '\n';
	return 0;
}