#include <cstdio>
#include <cstring>
using namespace std;

char c[333335];
int main() {
	scanf("%s", c);
	int len = strlen(c);
	if (c[0] == '0') printf("0");
	else
	for (int i = 0; i < len; i++) {
		if (i == 0) {
			if (c[i] == '1') printf("1");
			else if (c[i] == '2') printf("10");
			else if (c[i] == '3') printf("11");
			else if (c[i] == '4') printf("100");
			else if (c[i] == '5') printf("101");
			else if (c[i] == '6') printf("110");
			else if (c[i] == '7') printf("111");
		}
		else {
			if (c[i] == '0') printf("000");
			else if (c[i] == '1') printf("001");
			else if (c[i] == '2') printf("010");
			else if (c[i] == '3') printf("011");
			else if (c[i] == '4') printf("100");
			else if (c[i] == '5') printf("101");
			else if (c[i] == '6') printf("110");
			else if (c[i] == '7') printf("111");
		}
	}
	return 0;
}