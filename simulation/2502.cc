#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int> >v[31];
int n, k;
int main() {
	v[1].push_back(make_pair(1, 0));
	v[2].push_back(make_pair(0, 1));
	cin >> n >> k;
	for (int i = 3; i <= n;i++) {
		v[i].push_back(make_pair(v[i - 1][0].first + v[i - 2][0].first, v[i - 1][0].second + v[i - 2][0].second));
	}
	int f = v[n][0].first;
	int s = v[n][0].second;

	for (int i = 1;; i++) {
		for (int j = i;;j++) {
			if (f*i + s*j > k) break;
			if (f*i + s*j == k) {
				cout << i << '\n' << j;
				return 0;
			}
		}
	}
	return 0;
}