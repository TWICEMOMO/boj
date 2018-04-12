#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int n, p, q, a[1000001];
long long t[1000001], res;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	cin >> p >> q;
	for (int i = 0; i < n; i++) {
		if (a[i] <= p) t[i]++;
		else {
			t[i]++;
			int k = a[i] - p;
			if (k%q == 0) t[i] +=(k / q);
			else t[i] += (k / q + 1);
		}
		res += t[i];
	}
	cout << res << '\n';
	return 0;
}