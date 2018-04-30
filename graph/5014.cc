#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;

bool flag;
int F, S, G, U, D, dist[1000001];
queue<int>q;
int main() {
	cin >> F >> S >> G >> U >> D;
	q.push(S);
	dist[S] = 1;
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		if (now == G) {
			flag = true;
			break;
		}
		if (now + U <= F) {
			if (dist[now + U] == 0) dist[now + U] = dist[now] + 1, q.push(now + U);
		}
		if (now - D >= 1) {
			if (dist[now - D] == 0) dist[now - D] = dist[now] + 1, q.push(now - D);
		}
	}
	if (flag) cout << dist[G] - 1 << '\n';
	else cout << "use the stairs" << '\n';
	return 0;
}
