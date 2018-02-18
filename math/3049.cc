#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int N;
int main() {
	cin >> N;
	N = N*(N - 1)*(N - 2)*(N - 3) / 24;
	cout << N << '\n';
	return 0;
}