#include <iostream>
#include <string>
#include <vector>
using namespace std;

string T, P;
vector<int>makePi(string p);
vector<int>kmp(string t, string p);
int main() {
	getline(cin, T);
	getline(cin, P);
	vector<int>res = kmp(T, P);
	cout << res.size() << '\n';
	for (int i = 0; i < res.size(); i++) {
		cout << res[i] + 1 << '\n';
	}
	return 0;
}
vector<int>makePi(string p) {
	int m = p.size();
	vector<int>pi(m,0);
	for (int i = 1, j = 0; i < m; i++) {
		while (j > 0 && p[i] != p[j]) j = pi[j - 1];
		if (p[i] == p[j]) pi[i]=++j;
	}
	return pi;
}
vector<int>kmp(string t, string p) {
	int n = t.size();
	int m = p.size();
	vector<int>pi = makePi(p);
	vector<int>res;
	for (int i = 0, j = 0; i < n; i++) {
		while (j > 0 && t[i] != p[j]) j = pi[j - 1];
		if (t[i] == p[j]) {
			if (j == m - 1) {
				res.push_back(i - m + 1);
				j = pi[j];
			}
			else ++j;
		}
	}
	return res;
}