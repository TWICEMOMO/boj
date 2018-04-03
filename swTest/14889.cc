#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int a[21][21], n, res=1919191919,tmp;
void go(int s,int idx);
int abs(int x);
bool visit[21];
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		memset(visit, false, sizeof(visit));
		visit[i] = true;
		go(i, n / 2 - 1);
	}
	cout << res << '\n';
	return 0;
}
void go(int s, int idx) {
	if (idx == 0) {
		int st = 0, r=0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i == j) continue;
				if (visit[i] && visit[j]) st += a[i][j];
				if (!visit[i] && !visit[j]) r += a[i][j];
			}
		}
		if (res > abs(r-st)) res = abs(r-st);
	}
	for (int i = s+1; i < n; i++) {
		visit[i] = true;
		go(i, idx - 1);
		visit[i] = false;
	}
}
int abs(int x) {
	if (x < 0) return -x;
	return x;
}