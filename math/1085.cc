#include <iostream>
#include <algorithm>
using namespace std;

int x, y, w, h;
int go(int y);
int main() {
	cin >> x >> y >> w >> h;
	int Min = min({ go(y - 0),go(y - h),go(x - 0),go(x - w) });
	cout << Min;
	return 0;
}
int go(int y) {
	if (y < 0) return -y;
	return y;
}