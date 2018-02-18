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
		int cnt = 0;
		string a, b; cin >> a >> b;
		for (int i = 0; i < a.length(); i++) {
			if (a[i] != b[i]) cnt++;
		}
		cout << "Hamming distance is " << cnt << "." << '\n';
	}
	return 0;
}