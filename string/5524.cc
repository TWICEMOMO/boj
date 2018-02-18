#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int N, d[201][3], mt[101][3];
int main() {
	cin >> N;
	while (N--) {
		string s; cin >> s;
		for (int i = 0; i < s.length(); i++) {
			s[i] = towlower(s[i]);
		}
		cout << s << '\n';
	}
	return 0;
}