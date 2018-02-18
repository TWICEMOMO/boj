#include <cstdio>
#include <queue>
using namespace std;

int n;
queue<int>q;
int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	while (q.size()) {
		printf("%d ", q.front());
		q.pop();
		if (!q.size()) break;
		int now = q.front(); q.pop();
		q.push(now);
	}
	return 0;
}