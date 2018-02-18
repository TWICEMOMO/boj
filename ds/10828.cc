#include <cstdio>
#include <stack>
#include <string>
#include <iostream>
using namespace std;

int N;
int main() {
	scanf("%d", &N);
	stack<int>st;
	while (N--) {
		string s; cin >> s;
		if (s == "push") {
			int k; scanf("%d", &k);
			st.push(k);
		}
		else if (s == "pop") {
			if (st.size()) {
				printf("%d\n", st.top());
				st.pop();
			}
			else {
				printf("-1\n");
			}
		}
		else if (s == "size") {
			printf("%d\n", st.size());
		}
		else if (s == "empty") {
			if (st.empty()) {
				printf("1\n");
			}
			else {
				printf("0\n");
			}
		}
		else if (s == "top") {
			if (st.size()) {
				printf("%d\n", st.top());
			}
			else {
				printf("-1\n");
			}
		}
	}

	return 0;
}