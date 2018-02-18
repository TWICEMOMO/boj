#include <cstdio>
#include <string>
#include <stack>
#include <iostream>
using namespace std;

int ans;
string s;
stack<int>st;
int main() {
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(') st.push(i);
		else {
			if (st.top() + 1 == i) {
				st.pop();
				ans += st.size();
			}
			else {
				st.pop();
				ans++;
			}
		}
	}
	printf("%d\n", ans);
	return 0;
}