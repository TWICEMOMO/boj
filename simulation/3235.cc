#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int N, a[101], b[101];
int main() {
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> b[i];
	}
	int sum = 0;
	for (int i = 1; i <= N; i++) {
		a[i] = b[i] * i - sum;
		sum += a[i];
	}
	for (int i = 1; i <= N; i++) {
		cout << a[i] << " ";
	}
	return 0;
}