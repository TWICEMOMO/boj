#include <iostream>
#include <string>
using namespace std;

int T;
int main() {
	cin >> T;
	while (T--) {
		int k; cin >> k;
		string s; cin >> s;
		for (int j = 0; j < s.length(); j++) {
			for (int i = 0; i < k; i++) {
                cout<<s[j];
			}
		}
		cout << '\n';
	}
	return 0;
}