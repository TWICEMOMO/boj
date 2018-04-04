#include <iostream>
#include <string>
#include <stack>
#include <stack>
using namespace std;

int l, r, lidx, ridx, as, ts;
string a, t;
bool flag = true;
stack<char>lst;
stack<char>rst;
stack<char>tmp;
char lchar[300001], rchar[300001];
bool chk();
int main() {
	cin >> a >> t;
	as = a.size();
	ts = t.size();
	flag = true;
	l = 0, r = t.size() - 1;
	while (l <= r) {
		if (flag) {
			lst.push(t[l]);
			if (lst.size() >= as && lst.top() == a[as - 1] && chk()) {
				flag = false;
			}
			l++;
		}
		else {
			rst.push(t[r]);
			if (rst.size() >= as && rst.top() == a[0] && chk()) {
				flag = true;
			}
			r--;
		}
	}

	flag = false;
	while (!lst.empty()) {
		rst.push(lst.top());
		lst.pop();
		if (rst.size() >= as && rst.top() == a[0]) chk();
	}


	while (!rst.empty()) {
		cout << rst.top();
		rst.pop();
	}
	return 0;
}

bool chk() { 
	if (flag) {
		string aa = "";
		for (int i = as - 1; i >= 0; i--) {
			if (a[i] != lst.top()) {
				for (int k = 0; k < aa.size(); k++) {
					lst.push(aa[k]);
				}
				return false;
			}
			aa = lst.top() + aa;
			lst.pop();
		}
	}
	if (!flag) {
		string aa = "";
		for (int i = 0; i < as; i++) {
			if (a[i] != rst.top()) {
				for (int k = 0; k < aa.size(); k++) {
					rst.push(aa[k]);
				}
				return false;
			}
			aa = rst.top() + aa;
			rst.pop();
		}
	}
	return true;
}
