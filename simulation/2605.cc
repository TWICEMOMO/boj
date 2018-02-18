#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;

int n, a[101];
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int k; cin >> k;
		a[i] = i;
		if (i != 0) {
			int tmp = a[i];
			for (int j = 0; j < k; j++) {
				a[i - j] = a[i - j - 1];
			}
			a[i - k] = tmp;
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}