#include <iostream>
#include <cstring>
using namespace std;

int N, M, Min = 65;;
char c[51][51];
void go(int y, int x);
int chk(int y, int x);
int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> c[i];
	}
	go(0, 0);
	cout << Min << '\n';
	return 0;
}
void go(int y, int x) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (i + 8 > N || j + 8 > M) continue;
			int tmp = chk(i, j);
			if (Min > tmp) Min = tmp;
		}
	}
}
int chk(int y, int x) {
	int ans = 0;
	for (int i = y; i < y + 8; i++) {
		for (int j = x; j < x + 8; j++) {
			if ((i + j) & 1) {
				if (c[i][j] != 'B') ans++;
			}
			else {
				if (c[i][j] != 'W') ans++;
			}
		}
	}
	return ans > 64 - ans ? 64 - ans : ans;
}