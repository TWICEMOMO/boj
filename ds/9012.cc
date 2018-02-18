#include <cstdio>
#include <stack>
#include <string>
#include <iostream>
using namespace std;

int t;
int main() {
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		string s; cin >> s;
		stack<char> st;
		bool flag = false;
		for (int j = 0; j < s.length(); j++) {
			if (st.empty() && s[j] == ')') {
				st.push(')');
				break;
			}
			if (s[j] == '(') st.push('(');
			else st.pop();
		}
		if (!st.empty()) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}