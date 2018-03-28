#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <map>
#include <set>
using namespace std;

int t, d[10001], a[21], n, m;
int main() {
	cin >> t;
	while (t--) {
		memset(a, 0, sizeof(a));
		memset(d, 0, sizeof(d));
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		cin >> m;
		d[0] = 1;
		for (int i = 0; i < n; i++) {
			for (int j = 1; j <= m; j++) {
				if (j - a[i] >= 0) d[j] += d[j - a[i]];
			}
		}
		cout << d[m] << '\n';
	}
	return 0;
}