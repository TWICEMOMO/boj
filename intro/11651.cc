#include <cstdio>
#include <algorithm>
using namespace std;

struct G {
	int x;
	int y;
};
bool cmp(G a, G b);
int n;
G g[100001];
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &g[i].x, &g[i].y);
	}
	sort(g, g + n, cmp);
	for (int i = 0; i < n; i++) {
		printf("%d %d\n", g[i].x, g[i].y);
	}
	return 0;
}
bool cmp(G a, G b) {
	if (a.y == b.y) {
		return a.x < b.x;
	}
	return a.y < b.y;
}