#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n, a[10], t=1001, res;
int go(int x, int sum);
int absNum(int n);
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	cout<<go(0,0);
	return 0;
}
int go(int x, int sum) {
	if (x > 10) return 0;
	int k = absNum(sum - 100);
	if(t>=k){
		t = k;
		if (res < sum) {
			res = sum;
		}
	}
	sum += a[x];
	go(x + 1, sum);
	return res;
}
int absNum(int n) {
	if (n < 0) return -n;
	return n;
}