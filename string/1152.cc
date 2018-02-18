#include <iostream>
#include <string>
using namespace std;

bool flag;
int ans;
string s;
int main() {
	getline(cin,s);
	for (int i = 0; i < s.length(); i++) {
		if (i == 0) {
			if (s[i] != ' ') {
				ans++;
			}
			else flag = true;
		}
		else {
			if (s[i] == ' ') flag = true;
			else if(flag && s[i]!=' ') {
				ans++;
				flag = false;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}