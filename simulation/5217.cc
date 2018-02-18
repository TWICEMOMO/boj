#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int t;
int main() {
	cin >> t;
	for (int i = 0; i < t; i++) {
		vector < pair<int, int>> v;
		int k; cin >> k;
		cout << "Pairs for " << k << ": ";
		for (int j = 1; j <= k; j++) {
			for (int c = j + 1; c <= k; c++) {
				if (c + j == k) v.push_back(make_pair(j, c));
			}
		}
		for (int i = 0; i < v.size(); i++) {
			cout << v[i].first << " " << v[i].second;
			if (i + 1 == v.size()) break;
			cout << ", ";
		}
		cout << '\n';
	}
	return 0;
}