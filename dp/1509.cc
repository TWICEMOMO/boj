#include <iostream>
#include <string>
#include <cstring>
using namespace std;

string s;
int d[2501][2501],dp[2501];
int main() {
	cin >> s;
	s = " " + s;
	for (int i = 1; i < s.size(); i++) {
		for (int j = 1; j <= i; j++) {
			if (j == i) d[i][j] = 1;
			else if (j + 1 == i) {
				if (s[i] == s[j]) d[j][i] = 2;
			}
			else if (s[i] == s[j] && d[j+1][i-1]!=0) d[j][i] = d[j + 1][i - 1]+2;
		}
	}
	memset(dp, -1, sizeof(dp));
	dp[0] = 0;
	for (int i = 1; i < s.size(); i++) {
		for (int j = 1; j <= i; j++) {
			if (d[j][i]!=0) {
				if (dp[i] == -1|| dp[i] > dp[j - 1] + 1) dp[i] = dp[j - 1] + 1;
			}
		}
	}
	cout << dp[s.size()-1] << '\n';
	return 0;
} 