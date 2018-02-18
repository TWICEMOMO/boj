#include <iostream>
#include <string>
#include <stack>
#include <map>
using namespace std;

int n, m, w[101][101], ans;
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int a, b, c, d; cin >> a >> b >> c >> d;
		for (int j = b; j <= d; j++) {
			for (int k = a; k <= c; k++) {
				w[j][k]++;
			}
		}
	}
	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			if (w[i][j] > m) ans++;
		}
	}
	cout << ans << '\n';
	return 0;
}