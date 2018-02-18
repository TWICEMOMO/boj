#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int N, ans;
int main() {
	cin >> N;
	for (int i = 1; i <= N; i++) {
		int k; cin >> k;
		if (k != i) ans++;
	}
	cout << ans << '\n';
	return 0;
}