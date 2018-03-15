#include <iostream>
#include <cstdio>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <map>
#include <set>
#include <cstring>
#include <string>
#include <cmath>
using namespace std;

int n;
queue<int>q;
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		 q.push(i);
	}
	while (q.size()!=1) {
		q.pop();
		int f = q.front();
		q.pop();
		q.push(f);
	}
	cout << q.front();
	return 0;
}