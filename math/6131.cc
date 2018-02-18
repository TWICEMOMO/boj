#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int N, cnt;
int main() {
	cin >> N;
	for (int i = 1; i < 501; i++) {
		for (int j = i; j < 501; j++) {
			if (i*i + N == j*j) cnt++;
		}
	}
	cout << cnt << '\n';
	return 0;
}