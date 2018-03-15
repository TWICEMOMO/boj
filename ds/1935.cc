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

int n;
stack<double>st;
string s;
map<int, int>m;
int main() {
	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		int k; cin >> k;
		m['A' + i] = k;
	}
	for (int i = 0; i < s.length(); i++) {
		if ('A' <= s[i] && s[i] <= 'Z') {
			st.push(m[s[i]]);
		}
		else {
			if (s[i] == '*') {
				double n1 = st.top();
				st.pop();
				double n2 = st.top();
				st.pop();
				st.push(n1*n2);
			}
			else if (s[i] == '/') {
				double n1 = st.top();
				st.pop();
				double n2 = st.top();
				st.pop();
				st.push(n2/n1);
			}
			else if (s[i] == '+') {
				double n1 = st.top();
				st.pop();
				double n2 = st.top();
				st.pop();
				st.push(n2 + n1);
			}
			else if (s[i] == '-') {
				double n1 = st.top();
				st.pop();
				double n2 = st.top();
				st.pop();
				st.push(n2 - n1);
			}
		}
	}
	cout << fixed;
	cout.precision(2);
	cout << st.top();
	return 0;
}