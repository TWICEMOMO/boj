#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;

int n;
int main() {
	cin.tie(0);
	cin >> n;
	while (n--) {
		int a, b; cin >> a >> b;
		for (int i = 0; i <= b; i++) {
			if (a - i * 2 == b - i) {
				cout << b - i << " " << i << '\n';
				break;
			}
		}
	}
	return 0;
}