#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

int _x[] = { 1,-1,0,0 };
int _y[] = { 0,0,1,-1 };
int n,a[125][125], d[125][125];
bool visit[125][125];
struct G {
	int a, b, c;
	G(int a, int b, int c): a(a),b(b),c(c){}
	bool operator< (G other) const {
		return a < other.a;
	}
};
int main() {
	for(int T=1;;T++){
		cin >> n;
		if (n == 0) break;
		memset(visit, false, sizeof(visit));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> a[i][j];
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				d[i][j] = 1000000007;
			}
		}
		priority_queue<G>pq;
		d[0][0] = a[0][0];
		pq.push(G(a[0][0], 0, 0));

		while (!pq.empty()) {
			G p = pq.top();
			pq.pop();
			if (p.b == n - 1 && p.c == n - 1) {
				cout << "Problem " << T << ": " << -p.a << '\n';
			}
			if (visit[p.b][p.c]) continue;
			visit[p.b][p.c] = true;
			for (int i = 0; i < 4; i++) {
				int Y = p.b + _y[i];
				int X = p.c + _x[i];
				if (X >= 0 && X < n && Y >= 0 && Y < n) {
					if (d[Y][X] > d[p.b][p.c] + a[Y][X]) {
						d[Y][X] = d[p.b][p.c] + a[Y][X];
						pq.push(G( -d[Y][X],Y,X ));
					}
				}
			}
		}
	}
	return 0;
}