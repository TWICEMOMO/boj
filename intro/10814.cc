#include <cstdio>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

struct G {
	int age;
	int rank;
	char name[101];
};
bool cmp(const G a, const G b) {
	if (a.age == b.age) {
		return a.rank < b.rank;
	}
	return a.age < b.age;
}
int n;
G g[100001];
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %s", &g[i].age, &g[i].name);
		g[i].rank = i;
	}
	sort(g, g + n, cmp);
	for (int i = 0; i < n; i++) {
		printf("%d %s\n", g[i].age, g[i].name);
	}
	return 0;
}
