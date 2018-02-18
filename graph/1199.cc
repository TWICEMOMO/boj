#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int N, a[1001][1001];
void dfs(int s);
int main() {
	cin.tie(0);
	cin >> N;
	for (int i = 1; i <= N; i++) {
		int t = 0;
		for (int j = 1; j <= N; j++) {
			cin >> a[i][j];
			t += a[i][j];
		}
		if (t % 2 == 1) {
			cout << -1 << '\n';
			return 0;
		}
	}
	dfs(1);
	return 0;
}
void dfs(int s) {
	for (int i = 1; i <= N; i++) {
		while (a[s][i]) {
			a[i][s]--;
			a[s][i]--;
			dfs(i);
		}
	}
	cout << s << ' ';
}