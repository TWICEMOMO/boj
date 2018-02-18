#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

string srr[1001];
string s;
int main() {
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		srr[i]=s.substr(i,s.length());
	}
	sort(srr, srr + s.length());
	for (int i = 0; i < s.length(); i++) {
		cout << srr[i] << endl;
	}
	return 0;
}