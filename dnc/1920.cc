#include <iostream>
#include <algorithm>
using namespace std;

int n, a[100001], t;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> t;
	sort(a, a + n);
	for (int i = 0; i < t; i++) {
		int k; cin >> k;
		cout<<binary_search(a, a + n, k)<<'\n';
	}
	return 0;
}