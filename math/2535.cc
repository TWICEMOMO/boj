#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int n, a[101];
struct G {
	int c;
	int n;
	int s;
};
bool cmp(G a, G b) {
	return a.s > b.s;
}
G g[101];
int main() {
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b, c; cin >> a >> b >> c;
		g[i].c = a;
		g[i].n = b;
		g[i].s = c;
	}
	sort(g, g + n, cmp);
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (a[g[i].c] >= 2) continue;
		else {
			cnt++;
			a[g[i].c]++;
			cout << g[i].c << " " << g[i].n << '\n';
		}
		if (cnt == 3) break;
	}
	return 0;
}