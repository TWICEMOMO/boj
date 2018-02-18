#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int n, t[310], sum;
int main() {
	cin >> n;
	t[1] = 1;
	for (int i = 2; i <= 301; i++) {
		t[i] = t[i - 1] + i;
	}
	while (n--) {
		sum = 0;
		int k; cin >> k;
		for (int i = 1; i <= k; i++) {
			sum += (t[i + 1] * i);
		}
		cout << sum << '\n';
	}
	return 0;
}