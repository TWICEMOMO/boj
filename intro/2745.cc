#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

string N;
int B, ans;
int main() {
	cin >> N >> B;
	reverse(N.begin(), N.end());
	for (int i = 0; i < N.length(); i++) {
		if (N[i] >= 'A' && N[i] <= 'Z') {
			ans += ((N[i] - 'A')+10)*pow(B, i);
		}
		else {
			ans += (N[i] - '0')*pow(B, i);
		}
	}
	printf("%d\n", ans);
	return 0;
}