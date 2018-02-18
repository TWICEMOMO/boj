#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int N;
string s;
int main() {
	cin >> N;
	while (N--) {
		cin >> s;
		if ((s[s.length() - 1] - '0') % 2 == 0) cout << "even" << '\n';
		else cout << "odd" << '\n';
	}
	return 0;
}