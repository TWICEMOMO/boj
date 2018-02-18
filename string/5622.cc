#include <iostream>
#include <string>
using namespace std;

int ans;
string s;
int main() {
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] <= 'C') ans += 3;
		else if (s[i] <= 'F') ans += 4;
		else if (s[i] <= 'I') ans += 5;
		else if (s[i] <= 'L') ans += 6;
		else if (s[i] <= 'O') ans += 7;
		else if (s[i] <= 'S') ans += 8;
		else if (s[i] <= 'V') ans += 9;
		else if (s[i] <= 'Z') ans += 10;
	}
	cout << ans;
	return 0;
}