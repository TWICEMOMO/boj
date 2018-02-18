#include <iostream>
#include <string>
using namespace std;

int t;
int main() {
	cin >> t;
	while (t--) {
		int ans = 0;
		int a, b; cin >> a >> b;
		int d[101][101];
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				cin >> d[i][j];
			}
		}
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				if (d[i][j] == 1) {
					for (int k = i+1; k < a; k++) {
						if (d[k][j] == 0) ans++;
					}
				}
			}
		}
		cout << ans << '\n';
	}
	return 0;
}