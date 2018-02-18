#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int r, c, zr, zc;
char ch[51][51];
int main() {
	cin >> r >> c >> zr >> zc;
	for (int i = 0; i < r; i++) {
		cin >> ch[i];
	}
	for (int i = 0; i < r; i++) {
		for (int d = 0; d < zr; d++) {
			for (int j = 0; j < c; j++) {
				for (int k = 0; k < zc; k++) {
					cout << ch[i][j];
				}
			}
			cout << '\n';
		}
	}
	return 0;
}