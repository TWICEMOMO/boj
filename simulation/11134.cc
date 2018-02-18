#include <iostream>
#include <vector>
using namespace std;

int t;
int main() {
	cin >> t;
	while(t--) {
		int a, b; cin >> a >> b;
		int cnt = 0;
		while (a!=0) {
			if (a >= b) {
				a -= b;
			}
			else {
				cnt++;
				break;
			}
			cnt++;
		}
		cout << cnt << '\n';
	}
	return 0;
}