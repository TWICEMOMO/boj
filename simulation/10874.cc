#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;

int n;
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int score = 0;
		for (int j = 1; j <= 10; j++) {
			int k;  cin >> k;
			if ((j - 1) % 5+1 == k) score++;
		}
		if (score == 10) cout << i << '\n';
	}
	return 0;
}