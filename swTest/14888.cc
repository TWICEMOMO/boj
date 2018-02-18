#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

string s;
int Max = -1000010000;
int Min = 1000010000;
int n, a[11], cnt[4], len;
void go(int y, int sum, int next);
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 4; i++) {
		scanf("%d", &cnt[i]);
		len += cnt[i];
	}
	go(0, a[0], -1);
	cout << Max << '\n' << Min << '\n';
	return 0;
}
void go(int y, int sum, int next) {
	if (next == 0) sum += a[y];
	else if (next == 1) sum -= a[y];
	else if (next == 2) sum *= a[y];
	else if (next == 3) sum /= a[y];
	if (y + 1 == n) {
		if (Max < sum) Max = sum;
		if (Min > sum) Min = sum;
		return;
	}
	int now = a[y];
	for (int i = 0; i < 4; i++) {
		if (cnt[i] != 0) {
			cnt[i]--;
			go(y + 1, sum, i);
			cnt[i]++;
		}
	}
}