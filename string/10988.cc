#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;

char c[101];
int main() {
	cin >> c;
	int len = strlen(c);
	int l = len / 2;
	bool flag = true;
	for (int i = 0; i < l; i++) {
		if (c[i] != c[len - i-1]) {
			flag = false;
			break;
		}
	}
	if (flag) cout << 1 << '\n';
	else cout << 0 << '\n';
	return 0;
}