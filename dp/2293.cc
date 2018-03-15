#include <iostream>
#include <stack>
#include <queue>
#include <list>
#include <deque>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

int n, k, a[101], d[10100];
int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	d[0] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= k; j++) {
			if (j - a[i] >= 0) d[j]+=d[j-a[i]];
		}
	}

	cout << d[k];
	return 0;
}