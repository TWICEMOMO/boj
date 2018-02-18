#include <iostream>
using namespace std;

int N, a[1000];
void go(int num, int s, int b);
int main() {
	cin >> N;
	for (int i = 111; i < 1000; i++) {
		if ((i % 100) / 10 == 0 || i % 10 == 0) continue;
		int n1 = i / 100;
		int n2 = (i % 100) / 10;
		int n3 = i % 10;
		if (n1 == n2 || n1 == n3 || n2 == n3) continue;
		a[i] = 1;
	}
	for (int i = 0; i < N; i++) {
		int num, s, b;	cin >> num >> s >> b;
		go(num, s, b);
	}
	int ans = 0;
	for (int i = 111; i < 1000; i++) {
		if (a[i] == 1) ans++;
	}
	cout << ans << '\n';
	return 0;
}
void go(int num, int s, int b) {
	int m[3];
	m[0] = num / 100;
	m[1] = (num % 100) / 10;
	m[2] = num % 10;
	for (int i = 111; i < 1000; i++) {
		int tmp[3];
		tmp[0] = i / 100;
		tmp[1] = (i % 100) / 10;
		tmp[2] = i % 10;
		int ss = s, bb = b;
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				if (m[j] == tmp[k]) {
					if (j == k) ss--;
					else bb--;
				}
			}
		}
		if (ss != 0 || bb != 0) a[i] = 0;
	}
}