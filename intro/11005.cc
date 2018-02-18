#include <cstdio>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

int N, B;
string ans;
int main() {
	scanf("%d %d", &N, &B);
	while (N != 0) {
		int tmp = N%B;
		if (tmp > 9) {
			tmp -= 10;
			ans += ('A' + tmp);
		}
		else {
			ans += ('0' + tmp);
		}
		N /= B;
	}
	reverse(ans.begin(), ans.end());
	cout << ans;
	return 0;
}