#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int n;
long long t[36];
int main() {
	cin >> n;
	t[0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			t[i] += (t[j]*t[i-j-1]);
		}
	}
	cout << t[n] << '\n';
	return 0;
}