#include <cstdio>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

struct G {
	int kor;
	int eng;
	int math;
	string name;
};
bool cmp(G a, G b);
int n;
G g[100001];
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		cin >> g[i].name >> g[i].kor >> g[i].eng >> g[i].math;
	}
	sort(g, g + n, cmp);
	for (int i = 0; i < n; i++) {
		cout << g[i].name << '\n';
	}
	return 0;
}
bool cmp(G a, G b) {
	if (a.kor == b.kor) {
		if (a.eng == b.eng) {
			if (a.math == b.math) {
				return a.name < b.name;
			}
			return a.math > b.math;
		}
		return a.eng < b.eng;
	}
	return a.kor > b.kor;
}