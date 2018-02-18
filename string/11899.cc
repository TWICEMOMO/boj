#include <iostream>
#include <string>
#include <stack>
using namespace std;

int ans;
string s;
stack<int>st;
int main() {
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(') {
			st.push(i);
		}
		else if (s[i] == ')') {
			if (st.size() == 0) ans++;
			else st.pop();
		}
	}
	cout << ans + st.size() << '\n';
	return 0;
}