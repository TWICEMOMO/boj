#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int n, m, a[5];
char c[600][600];
int main() {
	cin >> n >> m;
	for (int i = 0; i < 5 * n + 1; i++) {
		for (int j = 0; j < 5 * m + 1; j++) {
			cin >> c[i][j];
		}
	}
	for (int i = 1; i < 5 * n + 1; i += 5) {
		for (int j = 1; j < 5 * m + 1; j += 5) {
			int cnt = 0;
			for (int k = 0; k < 4; k++) {
				if (c[i + k][j] == '*')  cnt++;
			}
			a[cnt]++;
		}
	}
	for (int i = 0; i < 5; i++) {
		cout << a[i] << " ";
	}
	return 0;
}