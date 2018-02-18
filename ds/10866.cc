#include <deque>
#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

deque<int>dq;
int n;
string s;
int main() {
	scanf("%d", &n);
	while (n--) {
		cin >> s;
		if (s == "push_front") {
			int k; scanf("%d", &k);
			dq.push_front(k);
		}
		else if (s == "push_back") {
			int k; scanf("%d", &k);
			dq.push_back(k);
		}
		else if (s == "pop_front") {
			if (dq.empty()) printf("-1\n");
			else {
				printf("%d\n", dq.front());
				dq.pop_front();
			}
		}
		else if (s == "pop_back") {
			if (dq.empty()) printf("-1\n");
			else {
				printf("%d\n", dq.back());
				dq.pop_back();
			}
		}
		else if (s == "size") {
			printf("%d\n", dq.size());
		}
		else if (s == "empty") {
			if (dq.empty()) printf("1\n");
			else printf("0\n");
		}
		else if (s == "front") {
			if (dq.empty()) printf("-1\n");
			else {
				printf("%d\n", dq.front());
			}
		}
		else if (s == "back") {
			if (dq.empty()) printf("-1\n");
			else {
				printf("%d\n", dq.back());
			}
		}
	}

	return 0;
}