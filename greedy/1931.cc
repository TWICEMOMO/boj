#include <iostream>
#include <algorithm>
using namespace std;

struct G {
	int s;
	int e;
};
bool cmp(G a, G b) {
	if (a.e == b.e) {
		return a.s < b.s;
	}
	return a.e < b.e;
}
G g[100001];
int n, ans,k,cnt;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> g[i].s >> g[i].e;
	}
	sort(g, g + n, cmp);
	while (1) {
		if (cnt >= n) break;
		if (g[cnt].s >= k) {
			k = g[cnt].e;
			ans++;
		}
		cnt++;
	}
	cout << ans << '\n'; 
	return 0;
}