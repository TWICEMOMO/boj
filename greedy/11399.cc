#include <iostream>
#include <algorithm>
using namespace std;

int N, P[1001], sum, res;
int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> P[i];
		sum += P[i];
	}
	sort(P, P + N);
	N--;
	for (int i = N; i>=0; i--) {
		res += sum;
		sum -= P[i];
	}
	cout << res << '\n';
	return 0;
}