#include <cstdio>
using namespace std;

int a, b, sum;
int mon[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
int main() {
	scanf("%d %d", &a, &b);
	for (int i = 0; i < a; i++) {
		sum += mon[i];
	}
	sum += b;
	if (sum % 7 == 1) printf("MON\n");
	else if (sum % 7 == 2) printf("TUE\n");
	else if (sum % 7 == 3) printf("WED\n");
	else if (sum % 7 == 4) printf("THU\n");
	else if (sum % 7 == 5) printf("FRI\n");
	else if (sum % 7 == 6) printf("SAT\n");
	else if (sum % 7 == 0) printf("SUN\n");
	return 0;
}