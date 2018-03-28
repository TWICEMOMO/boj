#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int res, Max;
string k;
int makePi(string s);
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> k;
	for (int i = 1; i <= k.length(); i++) {
		string tmp = k.substr(0, i);
		res = max(res, makePi(tmp));
		tmp = k.substr(k.size()-i, k.size());
		res = max(res, makePi(tmp));
	}
	cout << res << '\n';
	return 0;
}
int makePi(string s) {
	int m = s.size();
	vector<int>res;
	int Max = 0;
	res.resize(m, 0);
	for (int i = 1, j = 0; i < m; i++) {
		while (j > 0 && s[i] != s[j]) j = res[j - 1];
		if (s[i] == s[j]) res[i] = ++j;
	}
	for (int i = 0; i < res.size(); i++) {
		if (Max < res[i]) Max = res[i];
	}
	return Max;
}