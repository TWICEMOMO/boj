#include <iostream>
using namespace std;

int T;
int main() {
	cin >> T;
	while (T--) {
		int ans = 0;
		int N, K; cin >> N >> K;
		for (int i = 0; i < N; i++) {
			int a; cin >> a;
			ans += (a / K);
		}
		cout << ans << '\n';
	}
	return 0;
}