#include <iostream>
#include <cstdio>
using namespace std;

int T;
int main() {
	scanf("%d", &T);
	for (int i = 1; i <= T; i++) {
		int A, B; cin>>A>>B;
		printf("Case #%d: %d + %d = %d\n", i, A, B, A + B);
	}
	return 0;
}