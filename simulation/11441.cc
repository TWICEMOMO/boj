#include <iostream>
using namespace std;

int n,k, sum[100001];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int a;  cin >> a;
		sum[i] = (sum[i - 1] + a);
	}
	cin >> k;
	for (int i = 0; i < k; i++) {
		int a, b; cin >> a >> b;
		cout << sum[b] - sum[a - 1] << '\n';
	}
	return 0;
}