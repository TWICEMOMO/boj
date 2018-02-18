#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;

int n;
int main() {
	cin >> n;
	if (n & 1) cout << "SK" << '\n';
	else cout << "CY" << '\n';
	return 0;
}