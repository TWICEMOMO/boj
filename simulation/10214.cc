#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;

int N, ans;
int main() {
	cin.tie(0);
	cin >> N;
	for (int i = 0; i < N; ++i) {
		int y = 0, k = 0;
		for (int j = 0; j < 9; j++) {
			int a, b; cin >> a >> b;
			if (a > b) y++;
			else if (a < b) k++;
		}
		if (y > k) cout << "Yonsei" << '\n';
		else if (y < k) cout << "Korea" << '\n';
		else cout << "Draw" << '\n';
	}
	return 0;
}