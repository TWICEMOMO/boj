#include <iostream>
#include <string>
#include <map>
#include <cstdio>
using namespace std;

map <char, int>m;
string s;
int main() {
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		m[s[i]]++;
	}
	for (int i = 'a'; i <= 'z'; i++) {
		printf("%d ",m[i]);
	}
	return 0;
}