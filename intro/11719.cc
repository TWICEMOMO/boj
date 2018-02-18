#include <string>
#include <cstdio>
using namespace std;

char c;
int main() {
	while (1) {
		c = getchar();
		if (c == -1) break;
		putchar(c);
	}
	return 0;
}