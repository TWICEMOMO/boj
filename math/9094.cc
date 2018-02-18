#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int T, M, N;
int main() {
	cin.tie(0);
	cin >> T;
	while (T--) {
		int ans = 0;
		int a, b; cin >> N >> M;
		for (int i = 1; i < N; i++) {
			for (int j = i + 1; j < N; j++) {
				if (((i*i) + (j*j) + M) % (i*j) == 0) ans++;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}