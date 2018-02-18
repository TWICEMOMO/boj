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
	int t = 1;
	while (1) {
		if (N <= 0) break;
		if (N < t) t = 1;
		N -= t;
		t++;
		ans++;
	}
	cout << ans;
	return 0;
}