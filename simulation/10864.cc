#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int M, N, f[1001];
int main() {
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int a, b; cin >> a >> b;
		f[a]++;
		f[b]++;
	}
	for (int i = 1; i <= N; i++) {
		cout << f[i] << '\n';
	}
	return 0;
}