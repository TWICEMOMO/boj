#include <cstdio>
using namespace std;

void go(int k);
int self[10001];
int main() {
	for (int i = 1; i < 10001; i++) {
		if (self[i] == 0) go(i);
	}
	for (int i = 1; i < 10001; i++) {
		if (self[i] == 0) printf("%d\n", i);
	}
}
void go(int k) {
	if (k >= 10001) return;
	int n = k;
	int t = k;
	while (1) {
		n += (t % 10);
		t /= 10;
		if (t == 0) break;
	}
	self[n] = k;
	return go(n);
}