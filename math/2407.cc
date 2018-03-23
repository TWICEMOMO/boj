#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

int n, m;
string s[101][101];
string go(int y, int x);
string bint(string a, string b);
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	cout << go(n, m);
	return 0;
}
string go(int y, int x) {
	if (y == x || x == 0) return s[y][x]="1";
	if (s[y][x] != "") return s[y][x];
	return s[y][x] = bint(go(y - 1, x - 1), go(y - 1, x));
}
string bint(string a, string b) {
	int alen = a.size();
	int blen = b.size();
	if (alen < blen) {
		for (int i = alen; i < blen; i++) {
			a = '0' + a;
		}
	}
	else {
		for (int i = blen; i < alen; i++) {
			b = '0' + b;
		}
	}
	int carry = 0;
	string res = "";
	while (a.size() != 0 && b.size() != 0) {
		int anum = a.back() - '0';
		int bnum = b.back() - '0';
		a.pop_back();
		b.pop_back();
		int num = (carry + anum + bnum) % 10;
		carry = (carry + anum + bnum) / 10;
		res = (char)(num+'0')+res;
	}
	if (carry) {
		res = char(carry + '0') + res;
	}
	return res;
}