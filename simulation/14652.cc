#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int n, m, k;
int main() {
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++) {
		int c = m*i;
		for (int j = 0; j < m; j++) {
			if (c + j == k) {
				cout << i << " " << j << '\n';
				return 0;
			}
		}
	}
	return 0;
}