#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n,k, sum[100001];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	while (n--) {
		int cnt = 0;
		string k; cin >> k;
		if (k != "6174") {
			while (1) {
				sort(k.begin(), k.end());
				int a = atoi(k.c_str());
				reverse(k.begin(), k.end());
				int b = atoi(k.c_str());
				while (b < 1000) {
					b *= 10;
				}
				k = to_string(b - a);
				cnt++;
				if (b - a == 6174) break;
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}