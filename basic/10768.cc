#include <iostream>
#include <stack>
using namespace std;

int m, d;
int main() {
	cin >> m >> d;
	if (m == 2) {
		if (d == 18) cout << "Special";
		else if (d < 18) cout << "Before";
		else cout << "After";
	}
	else if (m > 2) {
		cout << "After";
	}
	else if (m < 2) {
		cout << "Before";
	}
	return 0;
}