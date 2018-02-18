#include <iostream>
#include <cstring>
using namespace std;

int n, res;
char c[101];
int main() {
	cin >> c;
	int len = strlen(c);
	for (int i = 0; i < len; i++) {
		if (i!=0 && i % 10 == 0) cout << '\n';
		cout << c[i];
	}
	return 0;
}