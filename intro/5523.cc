#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int n, A, B;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b; cin >> a >> b;
		if (a > b) A++;
		else if (a < b) B++;
	}
	cout << A << " " << B;
	return 0;
}