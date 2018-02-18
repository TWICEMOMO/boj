#include <cstdio>
using namespace std;

int N, ans;
void go(int k);
int main() {
	scanf("%d", &N);
	go(N);
	printf("%d", ans);
	return 0;
}
void go(int k) {
	if (k == 0) return;
	if (k < 100) ans++;
	else if (k < 1000) {
		int a = k / 100;
		int b = (k % 100) / 10;
		int c = k % 10;
		if (a < b && b < c) {
			if (b - a == c - b) ans++;
		}
		else if (a > b && b > c) {
			if (a - b == b - c) ans++;
		}
		else if (a == b && a == c) ans++;
	}	
	k--;
	go(k);
}