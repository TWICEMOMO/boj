#include <cstdio>
#include <queue>
using namespace std;

queue<int>q;
int n, m;
int main() {
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	printf("<");
	while (!q.empty()) {
		for (int i = 1; i < m; i++) {
			q.push(q.front());
			q.pop();
		}
		if (q.size() > 1) printf("%d, ", q.front());
		else printf("%d", q.front());
		q.pop();
	}
	printf(">");
	return 0;
}