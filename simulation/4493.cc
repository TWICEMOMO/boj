#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int t;
int main() {
	cin >> t;
	while(t--) {
		int k; cin >> k;
		int a, b; a = b = 0;
		for (int i = 0; i < k; i++) {
			string A, B; cin >> A >> B;
			if (A == "R" && B == "P") b++;
			else if (A == "R" && B == "S") a++;
			else if (A == "P" && B == "R") a++;
			else if (A == "P" && B == "S") b++;
			else if (A == "S" && B == "R") b++;
			else if (A == "S" && B == "P")a++;
		}
		if (a > b) cout << "Player 1" << '\n';
		else if (a < b) cout << "Player 2" << '\n';
		else cout << "TIE" << '\n';
	}
	return 0;
}