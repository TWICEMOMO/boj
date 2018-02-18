#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int N, ans;
bool visit[26];
string s;
int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> s;
		bool flag = false;
		memset(visit, false, sizeof(visit));
		for (int i = 0; i < s.length(); i++) {
			if (!visit[s[i] - 'a']) visit[s[i] - 'a'] = true;
			else if (visit[s[i] - 'a'] && s[i] == s[i - 1]) {
				continue;
			}
			else {
				flag = true;
				break;
			}
		}
		if (!flag) ans++;
	}
	cout << ans << '\n';
}