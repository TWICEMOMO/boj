#include <cstdio>
#include <cmath>
#include <stack>
using namespace std;

stack <int> st;
int n, b, t, ans;
int main() {
	scanf("%d %d %d", &n, &b, &t);
	int len = t;
	for (int i = 0; i < t; i++) {
		int k; scanf("%d", &k);
		ans += (k*pow(n,--len));
	}
	while (1) {
		st.push(ans%b);
		ans /= b;
		if (ans == 0) break;
	}
	while (!st.empty()) {
		printf("%d ", st.top());
		st.pop();
	}
	return 0;
}