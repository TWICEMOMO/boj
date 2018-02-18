#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, ans, tmp;
int main() {
	cin >> N;
	while (1) {
		tmp = 1;
		bool flag = false;
		while (1) {
			int k = N % 10;
			tmp *= k;
			N /= 10;
			if (N == 0) break;
			flag = true;
		}
		N = tmp;
		if (!flag) break;
		ans++;
	}
	cout << ans << '\n';
	return 0;
}