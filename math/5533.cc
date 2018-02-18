#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int N, d[201][3], mt[101][3];
int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a, b, c; cin >> a >> b >> c;
		d[i][0] = a;
		d[i][1] = b;
		d[i][2] = c;
		mt[a][0]++;
		mt[b][1]++;
		mt[c][2]++;
	}
	for (int i = 0; i < N; i++) {
		int ans = 0;
		for (int j = 0; j < 3; j++) {
			if (mt[d[i][j]][j] == 1)
				ans += d[i][j];
		}
		cout << ans << '\n';
	}
	return 0;
}