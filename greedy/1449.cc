#include <iostream>
#include <algorithm>
using namespace std;

int N, L, a[1001], ans;
int main() {
	cin >> N >> L;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	sort(a, a + N);
	int standard = a[0];
	for (int i = 0; i < N; i++) {
		if (a[i] - standard > L - 1) {
			standard = a[i];
			ans++;
		}
	}
	cout << ans + 1;
	return 0;
}