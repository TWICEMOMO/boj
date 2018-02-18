#include <cstdio>
#include <cstring>
using namespace std;

char c;
int n1, n2, n3, n4;
int main() {
	while (c=getchar()) {
		if (c == EOF) break;
		if (c == '\n') {
			printf("%d %d %d %d\n", n1, n2, n3, n4);
			n1 = n2 = n3 = n4 = 0;
		}
		if (c >= 'a' && c <= 'z') n1++;
		else if (c >= 'A' && c <= 'Z') n2++;
		else if (c >= '0' && c <= '9') n3++;
		else if (c == ' ') n4++;
	}
	return 0;
}