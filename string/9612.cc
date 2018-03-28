#include <iostream>
#include <string>
#include <map>
#include <set>
using namespace std;

int n, Max;
string s, res;
set<string>se;
map<string, int>m;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		m[s]++;
		se.insert(s);
	}
	set<string>::iterator iter;
	for (iter = se.begin(); iter != se.end(); ++iter) {
		if (m[*iter] >= Max) Max = m[*iter], res = *iter;
	}
	cout << res << " " << Max << '\n';
	return 0;
}