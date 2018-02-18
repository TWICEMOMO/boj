#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<int>v;
int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		int k; cin >> k;
		v.push_back(k);
	}
	sort(v.begin(), v.end());
	cout << v[0] * v[v.size() - 1]<<'\n';
	return 0;
}