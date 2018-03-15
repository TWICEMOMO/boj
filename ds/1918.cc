#include <iostream>
#include <cstdio>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <map>
#include <set>
#include <cstring>
#include <string>
#include <cmath>
using namespace std;

stack<char>st;
string s;
int main() {
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if ('A' <= s[i] && s[i] <= 'Z') {
			cout << s[i];
		}
		else {
			if (st.empty() || s[i]=='(') {
				st.push(s[i]);
			}
			else if (s[i]=='+' || s[i]=='-') {
				while (!st.empty()) {
					if (st.top() != '(') {
						cout << st.top();
						st.pop();
					}
					else {
						break;
					}				
				}
				st.push(s[i]);
			}
			else if (s[i] == '*' || s[i] == '/') {
				while (!st.empty()) {
					if (st.top() == '*' || st.top() == '/') {
						cout << st.top();
						st.pop();
					}
					else {
						break;
					}
				}
				st.push(s[i]);
			}
			else if (s[i] == ')') {
				while (!st.empty()) {
					if (st.top() != '(') {
						cout << st.top();
						st.pop();
					}
					else {
						st.pop();
						break;
					}
				}
			}
		}
	}
	while (!st.empty()) {
		cout << st.top();
		st.pop();
	}
	return 0;
}