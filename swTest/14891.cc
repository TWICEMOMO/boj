#include <iostream>
#include <string>
#include <vector>
using namespace std;

void go(int now, int val);
int k;
string s;
vector<string>v;
int main() {
	for (int i = 0; i < 4; i++) {
		cin >> s;
		v.push_back(s);
	}
	cin >> k;
	for (int i = 0; i < k; i++) {
		int a, b; cin >> a >> b;
		a--;
		go(a, b);
	}
	int ans = 0;
	int cnt = 1;
	for (int i = 0; i < 4; i++) {
		if (v[i][0] == '1') ans += cnt;
		cnt *= 2;
 	}
	cout << ans;

	return 0;
}
void go(int now, int val) {
	//>>
	int a[4];
	int temp = val;
	a[now] = val;
	for (int i = now+1; i < 4; i++) {
		if (v[i-1][2] != v[i][6]) {
			val = -val;
			a[i] = val;
		}
		else break;
	}
	val = temp;
	for (int i = now-1; i >= 0; i--) {
		if (v[i][2] != v[i + 1][6]) {
			val = -val;
			a[i] = val;
		}
		else break;
	}

	for (int i = 0; i < 4; i++) {
		if (a[i] == 1) {
			string temp = "";
			temp+=v[i][7];
			for (int j = 0; j < v[i].size() - 1; j++) {
				temp += v[i][j];
			}
			v[i] = temp;
		}
		else if (a[i] == -1) {
			string temp = "";
			for (int j = 1; j < v[i].size(); j++) {
				temp += v[i][j];
			}
			temp += v[i][0];
			v[i] = temp;
		}
	}

}