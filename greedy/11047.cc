#include <iostream>
using namespace std;

int N, K, a[11], ans;
int main() {
	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	while (1) {
		N--;
 		if (a[N] <= K) {
			ans += (K / a[N]);
			K %= a[N];
		}
		if (K == 0) break;
	}
	cout << ans << '\n';
	return 0;
}