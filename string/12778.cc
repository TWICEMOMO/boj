#include <iostream>
#include <string>
using namespace std;

int t;
int main() {
	cin >> t;
	while (t--) {
		int n;
		string s;
		cin >> n >> s;
		if (s == "C") {
			for (int i = 0; i < n; i++) {
				string k; cin >> k;
				cout << k[0] - 'A' + 1 << " ";
			}
		}
		else {
			for (int i = 0; i < n; i++) {
				int k; cin >> k;
				cout << char(65 + k-1) << " ";
			}
		}
		cout << '\n';
	}
	return 0;
}