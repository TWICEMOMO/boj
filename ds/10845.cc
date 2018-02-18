#include <cstdio>
#include <queue>
#include <iostream>
#include <string>
using namespace std;

queue<int>q;
string s;
int n;
int main() {
	scanf("%d", &n);
	while (n--) {
		cin >> s;
		if (s == "push") {
			int k; scanf("%d", &k);
			q.push(k);
		}
		else if (s=="pop") {
			if (q.empty()) printf("-1\n");
			else {
				printf("%d\n", q.front());
				q.pop();
			}
		}
		else if (s == "size") {
			printf("%d\n",q.size());
		}
		else if (s == "empty") {
			if (q.empty()) printf("1\n");
			else printf("0\n");
		}
		else if (s == "front") {
			if (q.empty()) printf("-1\n");
			else printf("%d\n", q.front());
		}
		else if (s == "back") {
			if (q.empty()) printf("-1\n");
			else printf("%d\n", q.back());
		}
	}
	return 0;
}