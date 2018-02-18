#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;

int go(int s);
int go2(int s);
int go3(int s);
int main() {
	for (int i = 1000; i < 10000; i++) {
		if (go(i) == go2(i) && go(i) == go3(i))
			cout << i << '\n';
	}
	return 0;
}
int go(int s) {
	int k = 0;
	while (s != 0) {
		k += s % 10;
		s /= 10;
	}
	return k;
}
int go2(int s) {
	int k = 0;
	while (s != 0) {
		k += s % 12;
		s /= 12;
	}
	return k;
}
int go3(int s) {
	int k = 0;
	while (s != 0) {
		k += s % 16;
		s /= 16;
	}
	return k;
}