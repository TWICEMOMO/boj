#include <cstdio>
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int N;
string s;
stack<char>Lt;
stack<char>Rt;
int main() {
	cin >> s >> N;
	for (int i = 0; i < s.length(); i++) {
		Lt.push(s[i]);
	}
	for (int i = 0; i < N; i++) {
		string pro; cin >> pro;
		if (pro == "L") {
			if (!Lt.empty()) {
				Rt.push(Lt.top());
				Lt.pop();
			}
		}
		else if (pro == "D") {
			if (!Rt.empty()) {
				Lt.push(Rt.top());
				Rt.pop();
			}
		}
		else if (pro == "B") {
			if (!Lt.empty()) {
				Lt.pop();
			}
		}
		else if (pro == "P") {
			char input; cin >> input;
			Lt.push(input);
		}
	}
	stack<char>tmp;
	while (!Lt.empty()) {
		tmp.push(Lt.top());
		Lt.pop();
	}
	while (!tmp.empty()) {
		printf("%c", tmp.top());
		tmp.pop();
	}
	while (!Rt.empty()) {
		printf("%c", Rt.top());
		Rt.pop();
	}
	return 0;
}