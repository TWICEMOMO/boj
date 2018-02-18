#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

string a, b, c, d;
int main() {
	cin >> a >> b >> c >> d;
	a = a + b;
	c = c + d;
	long long along= stoll(a);
	long long blong = stoll(c);
	printf("%lld\n", along + blong);
}