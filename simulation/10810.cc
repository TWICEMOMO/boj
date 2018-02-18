#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;

int N, M, d[101];
int main() {
	cin >> N >> M;
	while (M--) {
		int a, b, c; cin >> a >> b >> c;
		for (int i = a; i <= b; i++) {
			d[i] = c;
		}
	}
	for (int i = 1; i <= N; i++) {
		cout << d[i] << " ";
	}
	return 0;
}